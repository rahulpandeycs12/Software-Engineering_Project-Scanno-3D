#include "mainwindow.h"
#include <QApplication>

#include "tdk_scanwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qInfo() << "(main) Before Main Window declaration";
    MainWindow w;
    //qInfo() << "(main) After Main Window declaration";
    w.showMaximized();
    w.setMinimumSize(w.size());


    return a.exec();
}
