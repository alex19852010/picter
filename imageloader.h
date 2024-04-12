#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#pragma once
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QFileDialog>
#include <QtWidgets>

class imageLoader : QObject
{
  Q_OBJECT

public:
    imageLoader();


public slots:
    void loadImage();



private:
    QLabel label;

};

#endif // IMAGELOADER_H
