#ifndef VUMETREDEMO_H
#define VUMETREDEMO_H

#include <QWidget>

class QDeclarativeView;

class VuMetreDemo : public QWidget
{
    Q_OBJECT
public:
    explicit VuMetreDemo(QWidget *parent = 0);

protected:
    void timerEvent(QTimerEvent *);

public slots:

private:
    QDeclarativeView *_view;
};

#endif // VUMETREDEMO_H
