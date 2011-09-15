#include <QtGui/QApplication>
#include "vumetredemo.h"
#include "audioinput.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VuMetreDemo *vmDemo;
    vmDemo = new VuMetreDemo;
    vmDemo->show();
    AudioInput audio;

    return app.exec();
}
