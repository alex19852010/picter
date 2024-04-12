#include "imageloader.h"

imageLoader::imageLoader() : QObject()
{

}


void imageLoader::loadImage()
{

  QString imagePath = QFileDialog::getOpenFileName(nullptr, "select image", "", "Images (*.png *.jpg)");
          if (!imagePath.isEmpty()) {
              QPixmap image(imagePath);
              label.setPixmap(image);
            }
}
