#include <QGridLayout>
#include <QStyle>
#include <QToolButton>

#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget* parent)
    : QWidget(parent), ui_{std::make_unique<Ui::Widget>()}
{
    ui_->setupUi(this);

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

Widget::~Widget() = default;
