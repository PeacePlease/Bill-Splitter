#include "imageprocessing.hpp"

ImageProcessing::ImageProcessing(QString fileName)
{
    m_imageFile = fileName;
}

QString ImageProcessing::GetTextFromImage(){
    char *outText;

    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init(NULL, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Open input image with leptonica library
    Pix *image = pixRead(m_imageFile.toStdString().c_str());
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("OCR output:\n%s", outText);

    // Destroy used object and release memory
    api->End();

    pixDestroy(&image);

    return QString(outText);
}
