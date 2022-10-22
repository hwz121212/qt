#pragma once


#include <QtQml/qqmlextensionplugin.h>
#include <QtQml/qqml.h>

#include <gruesensor.h>
#include <QDebug>

#ifdef BUNDLED_PLUGIN
#include <QPluginLoader>
#include <QSensorPluginInterface>
#endif

QT_BEGIN_NAMESPACE

class GrueSensorQmlImport : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid FILE "import.json")
public:
	virtual void registerTypes(const char *uri);
    

#ifdef BUNDLED_PLUGIN
    GrueSensorQmlImport()
    {
        // For now, this is getting called after Sensors has loaded
        // Ensure that a change later does not break this by forcing
        // sensors to load now
        (void)QSensor::sensorTypes();

        // Load the bundled sensor plugin
        QPluginLoader loader(QString::fromLocal8Bit(BUNDLED_PLUGIN));
        QObject *instance = loader.instance();
        m_changes = qobject_cast<QSensorChangesInterface*>(instance);
        if (m_changes) {
            QSensor *sensor = new QSensor(QByteArray(), this);
            connect(sensor, SIGNAL(availableSensorsChanged()), this, SLOT(sensorsChanged()));
            m_changes->sensorsChanged();
        }
        QSensorPluginInterface *plugin = qobject_cast<QSensorPluginInterface*>(instance);
        if (plugin) {
            plugin->registerSensors();
        }
    }

private slots:
    void sensorsChanged()
    {
        m_changes->sensorsChanged();
    }

private:
    QSensorChangesInterface *m_changes;
#endif
};

QT_END_NAMESPACE



/*
    \omit
    \qmltype GrueSensor
    \instantiates GrueSensor
    \inherits Sensor
    \inqmlmodule Grue
    \brief The GrueSensor type reports on your chance of being eaten by a Grue.

    The GrueSensor type reports on your chance of being eaten by a Grue.

    This type wraps the GrueSensor class. Please see the documentation for
    GrueSensor for details.
    \endomit
*/

/*
    \omit
    \qmltype GrueSensorReading
    \instantiates GrueSensorReading
    \inherits SensorReading
    \inqmlmodule Grue
    \brief The GrueSensorReading type holds the most recent GrueSensor reading.

    The GrueSensorReading type holds the most recent GrueSensor reading.

    This type wraps the GrueSensorReading class. Please see the documentation for
    GrueSensorReading for details.

    This type cannot be directly created.
    \endomit
*/

/*
    \omit
    \qmlproperty qreal Grue1::GrueSensorReading::chanceOfBeingEaten
    Please see GrueSensorReading::chanceOfBeingEaten for information about this property.
    \endomit
*/
