#ifndef PRACTIC_H
#define PRACTIC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class practic; }
QT_END_NAMESPACE

class practic : public QMainWindow
{
    Q_OBJECT

public:
    practic(QWidget *parent = nullptr);
    ~practic();

private:
    Ui::practic *ui;
};
#endif // PRACTIC_H
