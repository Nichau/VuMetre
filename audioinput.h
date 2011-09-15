#ifndef AUDIOINPUT_H
#define AUDIOINPUT_H

#include <QObject>
class QAudioInput;
class QFile;

class AudioInput : public QObject
{
    Q_OBJECT
public:
    explicit AudioInput(QObject *parent = 0);

signals:

public slots:
    void stopRecording();

private:
    QAudioInput *audio;
    QFile *outputFile;


};

#endif // AUDIOINPUT_H
