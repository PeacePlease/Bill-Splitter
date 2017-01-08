#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ImageProcessing *image  = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/IMG_0670.JPG");
    ImageProcessing *image2 = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/SAINSBURYS.JPG");
    ImageProcessing *image3 = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/RYMAN.JPG");
    ImageProcessing *image4 = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/WHITTARD.JPG");
    ImageProcessing *image5 = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/NEXT.JPG");
    ImageProcessing *image6 = new ImageProcessing("/home/jhoggett/git/Bill-Splitter/Bill-Splitter/Resources/EUROSPIN.JPG");

    QString text  = image->GetTextFromImage();
    QString text2 = image2->GetTextFromImage();
    QString text3 = image3->GetTextFromImage();
    QString text4 = image4->GetTextFromImage();
    QString text5 = image5->GetTextFromImage();
    QString text6 = image6->GetTextFromImage();

    ui->label->setText(text);
    ui->label_2->setText(text2);
    ui->label_3->setText(text3);
    ui->label_4->setText(text4);
    ui->label_5->setText(text5);
    ui->label_6->setText(text6);
}

MainWindow::~MainWindow()
{
    delete ui;
}
