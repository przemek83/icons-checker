#include <QApplication>
#include <QGridLayout>
#include <QStyle>
#include <QToolButton>

#include "Widget.h"

Widget::Widget()
{
    QGridLayout* layout{new QGridLayout(this)};

    setLayout(layout);

    const int iconsCount{78};
    for (int i{0}; i < iconsCount; ++i)
    {
        QToolButton* button{new QToolButton(this)};
        QStyle::StandardPixmap pixmap{static_cast<QStyle::StandardPixmap>(i)};
        button->setIcon(QApplication::style()->standardIcon(pixmap));
        button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        button->setText(QString::number(i));
        const int iconsInRow{static_cast<int>(std::sqrt(iconsCount))};
        layout->addWidget(button, i / iconsInRow, i % iconsInRow);
    }
}
