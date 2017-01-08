#ifndef IMAGEPROCESSING_HPP
#define IMAGEPROCESSING_HPP

#include <QString>

#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>

class ImageProcessing
{
public:
    ImageProcessing(QString fileName);

    QString GetTextFromImage();

private:
    QString m_imageFile;
};

#endif // IMAGEPROCESSING_HPP
