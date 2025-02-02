#include <QApplication>
#include <QGridLayout>
#include <QStyle>
#include <QToolButton>

#include "Widget.h"

Widget::Widget()
{
    QGridLayout* layout{new QGridLayout(this)};

    setLayout(layout);

    for (int i{0}; i < 78; ++i)
    {
        QToolButton* button{new QToolButton(this)};
        QStyle::StandardPixmap pixmap{static_cast<QStyle::StandardPixmap>(i)};
        button->setIcon(QApplication::style()->standardIcon(pixmap));
        button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        button->setText(QString::number(i));
        layout->addWidget(button, i / 8, i % 8);
    }
}
