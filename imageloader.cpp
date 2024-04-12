#include "imageloader.h"

imageLoader::imageLoader(QLabel *label, QSlider *slider) : QObject(), label(label), slider(slider)
{

}


void imageLoader::loadImage()
{

  QString imagePath = QFileDialog::getOpenFileName(nullptr, "select image", "", "Images (*.png *.jpg)");
          if (!imagePath.isEmpty()) {
              QPixmap image(imagePath);
              label->setPixmap(image);
              slider->setEnabled(true);
              QObject::connect(slider, &QSlider::valueChanged, this, &imageLoader::changeImage);

            }
}


void imageLoader::changeImage(int value)
{

}
