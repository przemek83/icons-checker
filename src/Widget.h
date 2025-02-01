#pragma once

#include <memory>

#include <QWidget>

namespace Ui
{
class Widget;
}  // namespace Ui

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget* parent = 0);
    ~Widget() override;

private:
    std::unique_ptr<Ui::Widget> ui_;
};
