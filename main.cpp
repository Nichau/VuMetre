#include <QtGui/QApplication>
#include "vumetredemo.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VuMetreDemo *vmDemo;
    vmDemo = new VuMetreDemo;
    vmDemo->show();

    return app.exec();
}
