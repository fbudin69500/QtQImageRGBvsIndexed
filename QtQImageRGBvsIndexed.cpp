#include <QtCore/QString>
#include <QtGui/QImage>
#include <iostream>


int main(int argc, char* argv[])
{
  QImage::Format format = QImage::Format_RGB32;
  QImage image(10,10,format);
  QString imageName = "test.tiff";
  image.save(imageName);
  bool success = image.load(imageName);
  if(!success)
  {
    std::cout<<"Error while loading image "<< imageName.toStdString()<<std::endl;
    return 1;
  }
  if(format != image.format() )
  {
    std::cout<<"Format found (" << image.format() <<") is not format expected (" << format << ")" << std::endl;
    return 2;
  }
  std::cout<<"Success"<<std::endl;
  return 0;
}
