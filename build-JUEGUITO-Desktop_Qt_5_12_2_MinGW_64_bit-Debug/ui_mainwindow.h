/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *iniciarButton;
    QPushButton *instruccionesButton;
    QPushButton *historiaButton;
    QPushButton *CargarPartidaButton_2;
    QPushButton *GuardarPartidaButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *atrasButton;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QPushButton *iniciarButton_2;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1021);
        MainWindow->setMinimumSize(QSize(1200, 900));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 0, 1920, 1080));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/fon2.png);\n"
""));
        iniciarButton = new QPushButton(centralwidget);
        iniciarButton->setObjectName(QString::fromUtf8("iniciarButton"));
        iniciarButton->setGeometry(QRect(1310, 860, 131, 41));
        iniciarButton->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        instruccionesButton = new QPushButton(centralwidget);
        instruccionesButton->setObjectName(QString::fromUtf8("instruccionesButton"));
        instruccionesButton->setGeometry(QRect(1440, 180, 21, 31));
        instruccionesButton->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        historiaButton = new QPushButton(centralwidget);
        historiaButton->setObjectName(QString::fromUtf8("historiaButton"));
        historiaButton->setGeometry(QRect(30, 940, 201, 41));
        historiaButton->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        CargarPartidaButton_2 = new QPushButton(centralwidget);
        CargarPartidaButton_2->setObjectName(QString::fromUtf8("CargarPartidaButton_2"));
        CargarPartidaButton_2->setGeometry(QRect(1760, 860, 141, 41));
        CargarPartidaButton_2->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        GuardarPartidaButton_3 = new QPushButton(centralwidget);
        GuardarPartidaButton_3->setObjectName(QString::fromUtf8("GuardarPartidaButton_3"));
        GuardarPartidaButton_3->setGeometry(QRect(1610, 860, 141, 41));
        GuardarPartidaButton_3->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1470, 130, 181, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/avion_preview_rev_1.png);"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/avion_preview_rev_1.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, -20, 331, 311));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/gorda.png)"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/agachado_preview_rev_2.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(850, 600, 211, 251));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/patineta_preview_rev_2.png);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/patineta_preview_rev_2.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 70, 791, 231));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/titul.png);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(1320, 810, 511, 21));
        atrasButton = new QPushButton(centralwidget);
        atrasButton->setObjectName(QString::fromUtf8("atrasButton"));
        atrasButton->setGeometry(QRect(900, 860, 93, 41));
        atrasButton->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 0, 981, 401));
        label_7->setStyleSheet(QString::fromUtf8("border-image:url(:/Backgrounds games/cuadrotitulo.png);\\n"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 20, 621, 881));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/Instrucciones.png)"));
        label_5->setOpenExternalLinks(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1240, 720, 671, 121));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgrounds games/loggin.png)"));
        iniciarButton_2 = new QPushButton(centralwidget);
        iniciarButton_2->setObjectName(QString::fromUtf8("iniciarButton_2"));
        iniciarButton_2->setGeometry(QRect(1460, 860, 131, 41));
        iniciarButton_2->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 0);\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662444 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:1 rgba(0, 0, 255, 255));\n"
"font: 10pt \"Century Schoolbook\";\n"
"background-color: rgb(255, 255, 0);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 20, 621, 881));
        label_6->setStyleSheet(QString::fromUtf8("border-image:url(:/Backgrounds games/hidtoria.png)"));
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        graphicsView->raise();
        label_7->raise();
        instruccionesButton->raise();
        historiaButton->raise();
        iniciarButton->raise();
        CargarPartidaButton_2->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        GuardarPartidaButton_3->raise();
        atrasButton->raise();
        label_8->raise();
        lineEdit->raise();
        iniciarButton_2->raise();
        label_5->raise();
        label_6->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        iniciarButton->setText(QApplication::translate("MainWindow", "Iniciar (nivel 1)", nullptr));
        instruccionesButton->setText(QApplication::translate("MainWindow", ".", nullptr));
        historiaButton->setText(QApplication::translate("MainWindow", "Instrucciones del juego", nullptr));
        CargarPartidaButton_2->setText(QApplication::translate("MainWindow", "Cargar Partida", nullptr));
        GuardarPartidaButton_3->setText(QApplication::translate("MainWindow", "Guardar Partida", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        atrasButton->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QString());
        label_5->setText(QString());
        label_8->setText(QString());
        iniciarButton_2->setText(QApplication::translate("MainWindow", "Iniciar (nivel 2)", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
