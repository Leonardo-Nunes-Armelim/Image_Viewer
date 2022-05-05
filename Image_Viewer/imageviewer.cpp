#include "imageviewer.h"
#include "ui_imageviewer.h"

#include <QFileDialog>
#include <QPixmap>

ImageViewer::ImageViewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageViewer)
{
    ui->setupUi(this);
}

ImageViewer::~ImageViewer()
{
    delete ui;
}

/* Button: Search File >>> Opens a dialog window to choose a file */
void ImageViewer::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose File");

    if (filename.isEmpty())
        return;
    ui->lineEdit->setText(filename);
}

/* Button: Load >>> Add the selected files link to the combobox */
void ImageViewer::on_pushButton_2_clicked()
{
    QString filename = ui->lineEdit->text();
    ui->comboBox->addItem(filename);
    ui->lineEdit->clear();
}

/* Button: View >>> Display the selected image in the combobox */
void ImageViewer::on_pushButton_11_clicked()
{
    QString filename = ui->comboBox->currentText();
    QPixmap image(filename);
    ui->label->setPixmap(image.scaled(620, 470, Qt::KeepAspectRatio));
    image = (ui->label->pixmap());
    int w = image.width();
    int h = image.height();
    ui->label->setFixedWidth(w);
    ui->label->setFixedHeight(h);
    ui->label->setGeometry(0, 0, w, h);
}

/* Button: Zoom In >>> Zoom in on the image */
void ImageViewer::on_pushButton_3_clicked()
{
    QPixmap image(ui->label->pixmap());
    int w = image.width();
    int h = image.height();
    ui->label->setPixmap(image.scaled(w * 1.1, h * 1.1, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    image = (ui->label->pixmap());
    w = image.width();
    h = image.height();
    ui->label->setFixedWidth(w);
    ui->label->setFixedHeight(h);
}

/* Button: Zoom Out >>> Zoom out on the image */
void ImageViewer::on_pushButton_4_clicked()
{
    QPixmap image(ui->label->pixmap());
    int w = image.width();
    int h = image.height();
    ui->label->setPixmap(image.scaled(w * 0.9, h * 0.9, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    image = (ui->label->pixmap());
    w = image.width();
    h = image.height();
    ui->label->setFixedWidth(w);
    ui->label->setFixedHeight(h);
}

/* Button: Up >>> Move the image up */
void ImageViewer::on_pushButton_5_clicked()
{
    QPoint oldPosition = ui->label->pos();
    QPoint newPosition = QPoint(oldPosition.x(), oldPosition.y() + 50);
    ui->label->move(newPosition);
}

/* Button: Left >>> Move the image to the left */
void ImageViewer::on_pushButton_6_clicked()
{
    QPoint oldPosition = ui->label->pos();
    QPoint newPosition = QPoint(oldPosition.x() + 50, oldPosition.y());
    ui->label->move(newPosition);
}

/* Button: Right >>> Move the image to the right */
void ImageViewer::on_pushButton_7_clicked()
{
    QPoint oldPosition = ui->label->pos();
    QPoint newPosition = QPoint(oldPosition.x() - 50, oldPosition.y());
    ui->label->move(newPosition);
}

/* Button: Down >>> Move the image down */
void ImageViewer::on_pushButton_8_clicked()
{
    QPoint oldPosition = ui->label->pos();
    QPoint newPosition = QPoint(oldPosition.x(), oldPosition.y() - 50);
    ui->label->move(newPosition);
}

/* Button: Flip to Left >>> Flip the image to Left */
void ImageViewer::on_pushButton_9_clicked()
{
    QPixmap image(ui->label->pixmap());
    QTransform trans;
    trans.rotate(-90);
    //trans.fromTranslate();
    ui->label->setPixmap(image.transformed(trans));
}

/* Button: Flip to Right >>> Flip the image to Right */
void ImageViewer::on_pushButton_10_clicked()
{
    QPixmap image(ui->label->pixmap());
    QTransform trans;
    trans.rotate(90);
    ui->label->setPixmap(image.transformed(trans));
}

/* Slider: Brightness >>> Change the brightness of the image */
void ImageViewer::on_horizontalSlider_actionTriggered(int action)
{

}

/* Slider: Contrast >>> Change the contrast of the image */
void ImageViewer::on_horizontalSlider_2_actionTriggered(int action)
{

}
