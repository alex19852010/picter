#include "mainwindow.h"
#include <QApplication>
#include "imageloader.h"
#include <QtWidgets>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    window.setWindowTitle("image");
    QVBoxLayout layout(&window);
    QLabel label;
    QSlider slider(Qt::Horizontal);
    QPushButton button("select image");
    imageLoader imageloader(&label, &slider);
    slider.setMinimum(0);
    slider.setMaximum(10);
    slider.setEnabled(false);
    layout.addWidget(&label);
    layout.addWidget(&slider);
    layout.addWidget(&button);

    QObject::connect(&button, &QPushButton::clicked, &imageloader, &imageLoader::loadImage);

//    label.show();
//    button.show();
//    slider.show();

    window.show();

    return a.exec();
}
