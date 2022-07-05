/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Exitwindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Exitwindow)
    {
        if (Exitwindow->objectName().isEmpty())
            Exitwindow->setObjectName(QString::fromUtf8("Exitwindow"));
        Exitwindow->resize(362, 153);
        verticalLayout = new QVBoxLayout(Exitwindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Exitwindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignBottom);

        groupBox = new QGroupBox(Exitwindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  appearance: none;\n"
"  background-color: rgb(168, 168, 168);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  box-shadow: rgba(27, 31, 35, .1) 0 1px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  appearance: none;\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  box-shadow: rgba(27, 31, 35, .1) 0 1px 0;\n"
"  box-sizing: border-box;\n"
"  color: bl"
                        "ack;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  appearance: none;\n"
"  background-color: rgb(168, 168, 168);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  box-shadow: rgba(27, 31, 35, .1) 0 1px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  appearance: none;\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  box-shadow: rgba(27, 31, 35, .1) 0 1px 0;\n"
"  box-sizing: border-box;\n"
"  color: bl"
                        "ack;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Exitwindow);

        QMetaObject::connectSlotsByName(Exitwindow);
    } // setupUi

    void retranslateUi(QDialog *Exitwindow)
    {
        Exitwindow->setWindowTitle(QCoreApplication::translate("Exitwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Exitwindow", "\320\222\321\213 \321\203\320\262\320\265\321\200\320\265\320\275\321\213, \321\207\321\202\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \320\262\321\213\320\271\321\202\320\270?", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Exitwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Exitwindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exitwindow: public Ui_Exitwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
