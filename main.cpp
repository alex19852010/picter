#include "mainwindow.h"
#include <QApplication>
#include "imageloader.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    imageLoader imageloader;
    QLabel label;
    QPushButton button("select image");

    QObject::connect(&button, &QPushButton::clicked, &imageloader, &imageLoader::loadImage);

    label.show();
    button.show();

    w.show();
    return a.exec();
}
