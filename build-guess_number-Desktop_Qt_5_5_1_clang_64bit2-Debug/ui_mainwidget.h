/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pageSet;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonStart;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonEnd;
    QSpacerItem *horizontalSpacer_2;
    QWidget *pageGame;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QProgressBar *progressBar;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_back;
    QPushButton *pushButton_quit;
    QLineEdit *lineEdit;
    QWidget *pageWin;
    QLabel *labelWin;
    QWidget *pageLose;
    QLabel *labelLose;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(MainWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(MainWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSet = new QWidget();
        pageSet->setObjectName(QStringLiteral("pageSet"));
        gridLayout_2 = new QGridLayout(pageSet);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(pageSet);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(pageSet);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(pageSet);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonStart = new QPushButton(widget_3);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        horizontalSpacer_3 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonEnd = new QPushButton(widget_3);
        pushButtonEnd->setObjectName(QStringLiteral("pushButtonEnd"));

        horizontalLayout->addWidget(pushButtonEnd);

        horizontalSpacer_2 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget_3, 2, 0, 1, 1);

        stackedWidget->addWidget(pageSet);
        pageGame = new QWidget();
        pageGame->setObjectName(QStringLiteral("pageGame"));
        verticalLayout = new QVBoxLayout(pageGame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_4 = new QWidget(pageGame);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        progressBar = new QProgressBar(widget_4);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_6->addWidget(progressBar);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(pageGame);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_8 = new QPushButton(widget_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(widget_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(widget_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(widget_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(widget_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(widget_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(widget_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(widget_5);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 3, 2, 1, 1);

        pushButton_0 = new QPushButton(widget_5);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 1);

        pushButton_back = new QPushButton(widget_5);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        gridLayout->addWidget(pushButton_back, 4, 1, 1, 1);

        pushButton_quit = new QPushButton(widget_5);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));

        gridLayout->addWidget(pushButton_quit, 4, 2, 1, 1);

        lineEdit = new QLineEdit(widget_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 3);


        verticalLayout->addWidget(widget_5);

        stackedWidget->addWidget(pageGame);
        pageWin = new QWidget();
        pageWin->setObjectName(QStringLiteral("pageWin"));
        labelWin = new QLabel(pageWin);
        labelWin->setObjectName(QStringLiteral("labelWin"));
        labelWin->setGeometry(QRect(30, 30, 321, 221));
        stackedWidget->addWidget(pageWin);
        pageLose = new QWidget();
        pageLose->setObjectName(QStringLiteral("pageLose"));
        labelLose = new QLabel(pageLose);
        labelLose->setObjectName(QStringLiteral("labelLose"));
        labelLose->setGeometry(QRect(30, 30, 321, 241));
        stackedWidget->addWidget(pageLose);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(MainWidget);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", 0));
        label_2->setText(QApplication::translate("MainWidget", "<h2>\347\214\234\346\225\260\345\255\227\346\270\270\346\210\217</h2>", 0));
        label->setText(QApplication::translate("MainWidget", "\350\256\276\347\275\256\351\231\220\345\256\232\346\227\266\351\227\264:", 0));
        label_3->setText(QApplication::translate("MainWidget", "\347\247\222", 0));
        pushButtonStart->setText(QApplication::translate("MainWidget", "\345\274\200\345\247\213\346\270\270\346\210\217", 0));
        pushButtonEnd->setText(QApplication::translate("MainWidget", "\351\200\200\345\207\272\346\270\270\346\210\217", 0));
        pushButton_8->setText(QApplication::translate("MainWidget", "8", 0));
        pushButton_2->setText(QApplication::translate("MainWidget", "2", 0));
        pushButton_5->setText(QApplication::translate("MainWidget", "5", 0));
        pushButton_3->setText(QApplication::translate("MainWidget", "3", 0));
        pushButton_4->setText(QApplication::translate("MainWidget", "4", 0));
        pushButton_6->setText(QApplication::translate("MainWidget", "6", 0));
        pushButton_7->setText(QApplication::translate("MainWidget", "7", 0));
        pushButton_9->setText(QApplication::translate("MainWidget", "9", 0));
        pushButton_1->setText(QApplication::translate("MainWidget", "1", 0));
        pushButton_0->setText(QApplication::translate("MainWidget", "0", 0));
        pushButton_back->setText(QApplication::translate("MainWidget", "\345\233\236\351\200\200", 0));
        pushButton_quit->setText(QApplication::translate("MainWidget", "\346\224\276\345\274\203", 0));
        labelWin->setText(QString());
        labelLose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
