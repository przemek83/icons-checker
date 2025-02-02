#include <QGridLayout>
#include <QStyle>
#include <QToolButton>

#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget* parent)
    : QWidget(parent), ui_{std::make_unique<Ui::Widget>()}
{
    ui_->setupUi(this);

    QGridLayout* layout = new QGridLayout(this);

    setLayout(layout);

    for (int i = 0; i < 78; ++i)
    {
        QToolButton* button = new QToolButton(this);
        button->setIcon(
            QApplication::style()->standardIcon((QStyle::StandardPixmap)i));
        button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        button->setText(QString::number(i));
        layout->addWidget(button, i / 6, i % 6);
    }
}

Widget::~Widget() = default;
