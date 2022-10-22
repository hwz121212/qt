#pragma once


#include <QtTest/QtTest>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>

#include "modeltest.h"
#include "dynamictreemodel.h"


class tst_ModelTest : public QObject
{
    Q_OBJECT

private slots:
    void stringListModel();
    void treeWidgetModel();
    void standardItemModel();
    void testInsertThroughProxy();
    void moveSourceItems();
    void testResetThroughProxy();
};



/**
  Makes the persistent index list publicly accessible
*/
class AccessibleProxyModel : public QSortFilterProxyModel
{
	Q_OBJECT
public:
	AccessibleProxyModel(QObject *parent = 0) : QSortFilterProxyModel(parent) {}

	QModelIndexList persistent()
	{
		return persistentIndexList();
	}
};

class ObservingObject : public QObject
{
	Q_OBJECT
public:
	ObservingObject(AccessibleProxyModel  *proxy, QObject *parent = 0)
		: QObject(parent)
		, m_proxy(proxy)
		, storePersistentFailureCount(0)
		, checkPersistentFailureCount(0)
	{
		connect(m_proxy, SIGNAL(rowsAboutToBeMoved(QModelIndex, int, int, QModelIndex, int)), SLOT(storePersistent()));
		connect(m_proxy, SIGNAL(rowsMoved(QModelIndex, int, int, QModelIndex, int)), SLOT(checkPersistent()));
	}

public slots:

	void storePersistent(const QModelIndex &parent)
	{
		for (int row = 0; row < m_proxy->rowCount(parent); ++row) {
			QModelIndex proxyIndex = m_proxy->index(row, 0, parent);
			QModelIndex sourceIndex = m_proxy->mapToSource(proxyIndex);
			if (!proxyIndex.isValid()) {
				qWarning("%s: Invalid proxy index", Q_FUNC_INFO);
				++storePersistentFailureCount;
			}
			if (!sourceIndex.isValid()) {
				qWarning("%s: invalid source index", Q_FUNC_INFO);
				++storePersistentFailureCount;
			}
			m_persistentSourceIndexes.append(sourceIndex);
			m_persistentProxyIndexes.append(proxyIndex);
			if (m_proxy->hasChildren(proxyIndex))
				storePersistent(proxyIndex);
		}
	}

	void storePersistent()
	{
		// This method is called from rowsAboutToBeMoved. Persistent indexes should be valid
		foreach(const QModelIndex &idx, m_persistentProxyIndexes)
			if (!idx.isValid()) {
				qWarning("%s: persistentProxyIndexes contains invalid index", Q_FUNC_INFO);
				++storePersistentFailureCount;
			}

		if (!m_proxy->persistent().isEmpty()) {
			qWarning("%s: proxy should have no persistent indexes when storePersistent called",
				Q_FUNC_INFO);
			++storePersistentFailureCount;
		}
		storePersistent(QModelIndex());
		if (m_proxy->persistent().isEmpty()) {
			qWarning("%s: proxy should have persistent index after storePersistent called",
				Q_FUNC_INFO);
			++storePersistentFailureCount;
		}
	}

	void checkPersistent()
	{
		for (int row = 0; row < m_persistentProxyIndexes.size(); ++row) {
			m_persistentProxyIndexes.at(row);
			m_persistentSourceIndexes.at(row);
		}
		for (int row = 0; row < m_persistentProxyIndexes.size(); ++row) {
			QModelIndex updatedProxy = m_persistentProxyIndexes.at(row);
			QModelIndex updatedSource = m_persistentSourceIndexes.at(row);
			if (m_proxy->mapToSource(updatedProxy) != updatedSource) {
				qWarning("%s: check failed at row %d", Q_FUNC_INFO, row);
				++checkPersistentFailureCount;
			}
		}
		m_persistentSourceIndexes.clear();
		m_persistentProxyIndexes.clear();
	}

private:
	AccessibleProxyModel  *m_proxy;
	QList<QPersistentModelIndex> m_persistentSourceIndexes;
	QList<QPersistentModelIndex> m_persistentProxyIndexes;
public:
	int storePersistentFailureCount;
	int checkPersistentFailureCount;
};
