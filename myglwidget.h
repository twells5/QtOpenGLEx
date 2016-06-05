#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>

class MyGLWidget : public QGLWidget
{

 Q_OBJECT

public:
   explicit MyGLWidget(QWidget *parent = 0);
    ~MyGLWidget();

private:

    void draw();

    int xRot;
    int yRot;
    int zRot;

    QPoint lastPos;

signals:

    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);

public slots:

    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);


protected:

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

    QSize minimumSizeHint() const;
    QSize sizeHint();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

};

#endif // MYGLWIDGET_H
