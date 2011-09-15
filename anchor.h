#ifndef ANCHOR_H
#define ANCHOR_H

#include <QtCore/QObject>
#include <QtDebug>
#include <QtGui/QColor>

class Anchor : public QObject
{
    Q_OBJECT

public:

    Q_INVOKABLE void cppMethod(const QString &msg) {
        qDebug() << "Called the C++ method with" << msg;
    }
    Q_INVOKABLE int setValue(int value) {
    }
};

#endif // ANCHOR_H
