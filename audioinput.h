#ifndef AUDIOINPUT_H
#define AUDIOINPUT_H

#include <QObject>

class AudioInput : public QObject
{
    Q_OBJECT
public:
    explicit AudioInput(QObject *parent = 0);

signals:

public slots:

};

#endif // AUDIOINPUT_H
