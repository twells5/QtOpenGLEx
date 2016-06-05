#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QSlider>

namespace Ui {
class Window;
}

class Window : public QWidget
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();

private:
    Ui::Window *ui;

 protected:

    void keyPressEvent(QKeyEvent *event);


};

#endif // WINDOW_H
