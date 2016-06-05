#include "window.h"
#include <QtWidgets>
#include "ui_window.h"
#include "myglwidget.h"

Window::Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);


    connect(ui->myGLWidget, SIGNAL(xRotation(int)), ui->xRotSlider, SLOT(setValue(int)));
    connect(ui->myGLWidget, SIGNAL(yRotation(int)), ui->yRotSlider, SLOT(setValue(int)));
    connect(ui->myGLWidget, SIGNAL(zRotation(int)), ui->zRotSlider, SLOT(setValue(int)));
    connect(ui->xRotSlider,SIGNAL(valueChanged(int)), ui->myGLWidget, SLOT(setXRotation(int)));
    connect(ui->yRotSlider,SIGNAL(valueChanged(int)), ui->myGLWidget, SLOT(setYRotation(int)));
    connect(ui->zRotSlider,SIGNAL(valueChanged(int)), ui->myGLWidget, SLOT(setZRotation(int)));
}

Window::~Window()
{
    delete ui;
}


void Window::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
        close();
    else
        QWidget::keyPressEvent(event);
}
