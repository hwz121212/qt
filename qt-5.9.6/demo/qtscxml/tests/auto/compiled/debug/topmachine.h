//
// Statemachine code from reading SCXML file 'topmachine.scxml'
// Created by: The Qt SCXML Compiler version 1 (Qt 5.9.6)
// WARNING! All changes made in this file will be lost!
//

#ifndef TOPMACHINE_H
#define TOPMACHINE_H

#include <QScxmlStateMachine>
#include <QString>
#include <QVariant>

class SubMachine;
class SubMachine_2;
class SubMachine_3;

class TopMachine: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool topState)
    Q_PROPERTY(bool finalState)


public:
    Q_INVOKABLE TopMachine(QObject *parent = 0);
    ~TopMachine();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

class SubMachine: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool topState)


public:
    Q_INVOKABLE SubMachine(QObject *parent = 0);
    ~SubMachine();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

class SubMachine_2: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool topState)


public:
    Q_INVOKABLE SubMachine_2(QObject *parent = 0);
    ~SubMachine_2();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

class SubMachine_3: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool topState)


public:
    Q_INVOKABLE SubMachine_3(QObject *parent = 0);
    ~SubMachine_3();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

Q_DECLARE_METATYPE(::TopMachine*)
Q_DECLARE_METATYPE(::SubMachine*)
Q_DECLARE_METATYPE(::SubMachine_2*)
Q_DECLARE_METATYPE(::SubMachine_3*)

#endif // TOPMACHINE_H
