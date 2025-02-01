#include <QGridLayout>
#include <QToolButton>
#include <QStyle>

#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QGridLayout* layout = new QGridLayout(this);

    setLayout(layout);

    for(int i = 0; i < 70; ++i )
    {
        QToolButton* button = new QToolButton(this);
        button->setIcon(QApplication::style()->standardIcon((QStyle::StandardPixmap)i));
        button->setToolTip(QString::number(i));
        layout->addWidget(button, i/6, i%6);
    }
}

Widget::~Widget()
{
    delete ui;
}
