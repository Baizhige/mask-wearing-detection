/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *Name;
    QPushButton *CamButton;
    QTextBrowser *textBrowser;
    QLabel *NoteText;
    QPushButton *ElseCamButton;
    QLineEdit *CamSize;
    QPushButton *ImageButton;
    QLabel *Way;
    QTextEdit *ImageWay;
    QLabel *Cam;
    QGraphicsView *graphicsView;
    QPushButton *clearWayButton;
    QPushButton *clearNoteButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QStringLiteral("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(899, 683);
        QFont font;
        font.setFamily(QStringLiteral("3ds"));
        font.setBold(true);
        font.setWeight(75);
        QtWidgetsApplication1Class->setFont(font);
        QtWidgetsApplication1Class->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Name = new QLabel(centralWidget);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(270, 50, 290, 90));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        Name->setFont(font1);
        CamButton = new QPushButton(centralWidget);
        CamButton->setObjectName(QStringLiteral("CamButton"));
        CamButton->setGeometry(QRect(20, 300, 600, 90));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        CamButton->setFont(font2);
        CamButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 20pt \"\347\255\211\347\272\277\";\n"
""));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(630, 170, 256, 441));
        NoteText = new QLabel(centralWidget);
        NoteText->setObjectName(QStringLiteral("NoteText"));
        NoteText->setGeometry(QRect(630, 150, 72, 15));
        NoteText->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"text-decoration: underline;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        ElseCamButton = new QPushButton(centralWidget);
        ElseCamButton->setObjectName(QStringLiteral("ElseCamButton"));
        ElseCamButton->setGeometry(QRect(20, 450, 420, 90));
        ElseCamButton->setFont(font2);
        ElseCamButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 20pt \"\347\255\211\347\272\277\";"));
        CamSize = new QLineEdit(centralWidget);
        CamSize->setObjectName(QStringLiteral("CamSize"));
        CamSize->setGeometry(QRect(450, 500, 170, 40));
        ImageButton = new QPushButton(centralWidget);
        ImageButton->setObjectName(QStringLiteral("ImageButton"));
        ImageButton->setGeometry(QRect(20, 200, 181, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        ImageButton->setFont(font3);
        ImageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"\347\255\211\347\272\277\";"));
        Way = new QLabel(centralWidget);
        Way->setObjectName(QStringLiteral("Way"));
        Way->setGeometry(QRect(220, 170, 61, 35));
        Way->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 127);\n"
"text-decoration: underline;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        ImageWay = new QTextEdit(centralWidget);
        ImageWay->setObjectName(QStringLiteral("ImageWay"));
        ImageWay->setGeometry(QRect(220, 200, 331, 35));
        ImageWay->setTabChangesFocus(true);
        Cam = new QLabel(centralWidget);
        Cam->setObjectName(QStringLiteral("Cam"));
        Cam->setGeometry(QRect(450, 480, 72, 15));
        Cam->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);\n"
"text-decoration: underline;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(630, 50, 220, 70));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/QtWidgetsApplication1/gzhu.jpg);"));
        clearWayButton = new QPushButton(centralWidget);
        clearWayButton->setObjectName(QStringLiteral("clearWayButton"));
        clearWayButton->setGeometry(QRect(560, 200, 61, 35));
        clearWayButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"\347\255\211\347\272\277\";"));
        clearNoteButton = new QPushButton(centralWidget);
        clearNoteButton->setObjectName(QStringLiteral("clearNoteButton"));
        clearNoteButton->setGeometry(QRect(790, 620, 93, 30));
        clearNoteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"\347\255\211\347\272\277\";"));
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "Mask Detector", Q_NULLPTR));
        Name->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\217\243\347\275\251\350\257\206\345\210\253\347\263\273\347\273\237", Q_NULLPTR));
        CamButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\344\275\277\347\224\250\345\275\223\345\211\215\347\254\224\350\256\260\346\234\254\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        NoteText->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\277\220\350\241\214\346\227\245\345\277\227", Q_NULLPTR));
        ElseCamButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\344\275\277\347\224\250\345\244\226\347\275\256\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        ImageButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\206\345\210\253\345\233\276\347\211\207", Q_NULLPTR));
        Way->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\233\276\347\211\207\350\267\257\345\276\204", Q_NULLPTR));
        Cam->setText(QApplication::translate("QtWidgetsApplication1Class", "\347\233\270\346\234\272\345\236\213\345\217\267", Q_NULLPTR));
        clearWayButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\270\205\351\231\244", Q_NULLPTR));
        clearNoteButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\270\205\351\231\244\346\227\245\345\277\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
