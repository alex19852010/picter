#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#pragma once
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QFileDialog>
#include <QtWidgets>
#include <QSlider>
#include <QPixmap>

class imageLoader : public QObject
{
  Q_OBJECT

public:
    imageLoader(QLabel *label, QSlider *slider);


public slots:
    void loadImage();

public slots:
    void changeImage(int value);


private:
    QLabel *label;
    QSlider *slider;

};

#endif // IMAGELOADER_H
