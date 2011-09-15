#include "audioinput.h"
#include <QAudioInput>
#include <QAudioFormat>
#include <QTimer>

AudioInput::AudioInput(QObject *parent) :
    QObject(parent)
{
   outputFile.setFileName("/tmp/test.raw");
   outputFile.open( QIODevice::WriteOnly | QIODevice::Truncate );

   QAudioFormat format;
   // set up the format you want, eg.
   format.setFrequency(8000);
   format.setChannels(1);
   format.setSampleSize(8);
   format.setCodec("audio/pcm");
   format.setByteOrder(QAudioFormat::LittleEndian);
   format.setSampleType(QAudioFormat::UnSignedInt);

   QAudioDeviceInfo info = QAudioDeviceInfo::defaultInputDevice();
   if (!info.isFormatSupported(format)) {
       qWarning()<<"default format not supported try to use nearest";
       format = info.nearestFormat(format);
   }

   audio = new QAudioInput(format, this);
   QTimer::singleShot(3000, this, SLOT(stopRecording()));
   audio->start(&outputFile);
   // Records audio for 3000ms
 }
