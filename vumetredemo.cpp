#include <qmlapplicationviewer.h>
#include "vumetredemo.h"
#include <QObject>
#include <QColor>
#include <QtCore/QtDebug>
#include <QtCore/QObject>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/QDeclarativeItem>
#include <QtCore/QTimer>
#include <QtGui/QVBoxLayout>

VuMetreDemo::VuMetreDemo(QWidget *parent) :
    QWidget(parent)
{
    _view = new QDeclarativeView;
    _view->setSource(QUrl::fromLocalFile("../Resources/qml/VuMetre3/main.qml"));
    _view->show();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(_view);
    setLayout(mainLayout);

    startTimer(100);
}

void VuMetreDemo::timerEvent(QTimerEvent *)
{
    QObject *object = _view->rootObject();
    QVariant valueAnim = qrand() % 500;
    QMetaObject::invokeMethod(object, "animationValues", Q_ARG(QVariant, valueAnim));
}
