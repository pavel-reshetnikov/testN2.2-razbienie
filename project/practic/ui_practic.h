/********************************************************************************
** Form generated from reading UI file 'practic.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTIC_H
#define UI_PRACTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_practic
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *practic)
    {
        if (practic->objectName().isEmpty())
            practic->setObjectName(QString::fromUtf8("practic"));
        practic->resize(638, 554);
        centralwidget = new QWidget(practic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(7);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(168, 168, 168)"));

        gridLayout->addWidget(label_2, 6, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(168, 168, 168)"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(pushButton_3, 5, 0, 1, 2);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableView->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  appearance: none;\n"
"  background-color: #2ea44f;\n"
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
"  color: rgb(46, 164, "
                        "79);\n"
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
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setAutoExclusive(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  appearance: none;\n"
"  background-color: red;\n"
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
"  color: red;\n"
"  cursor"
                        ": pointer;\n"
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

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 2);

        practic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(practic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 638, 26));
        practic->setMenuBar(menubar);
        statusbar = new QStatusBar(practic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        practic->setStatusBar(statusbar);

        retranslateUi(practic);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(practic);
    } // setupUi

    void retranslateUi(QMainWindow *practic)
    {
        practic->setWindowTitle(QCoreApplication::translate("practic", "practic", nullptr));
        label_2->setText(QCoreApplication::translate("practic", "(\320\262\320\262e\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\201\321\202\321\200\320\276\320\272\320\265 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 ENTER \321\207\321\202\320\276\320\261\321\213 \320\277\321\200\320\270\320\275\321\217\321\202\321\214)", nullptr));
        label_3->setText(QCoreApplication::translate("practic", "(\320\262\321\201\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214\321\201\321\217 \320\277\320\276\321\201\320\273\320\265 \320\262\321\213\321\205\320\276\320\264\320\260)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("practic", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("practic", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\276\320\275\321\202\320\260\320\272\321\202\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("practic", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("practic", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("practic", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class practic: public Ui_practic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTIC_H
