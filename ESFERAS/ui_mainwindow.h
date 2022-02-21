/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLCDNumber *puntuacion;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *puntuacion_2;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *nivel;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(3000, 3000);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, -1, 1000, 521));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Serif")});
        font.setStyleStrategy(QFont::PreferDefault);
        graphicsView->setFont(font);
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/descarga.jpg);\n"
"image: url(:/manos.png);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1010, 10, 141, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1010, 40, 141, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 10, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(252, 252, 252);"));
        label->setOpenExternalLinks(false);
        puntuacion = new QLCDNumber(centralWidget);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setGeometry(QRect(900, 40, 81, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        puntuacion->setFont(font2);
        puntuacion->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(252, 252, 252);"));
        puntuacion->setFrameShape(QFrame::Panel);
        puntuacion->setSegmentStyle(QLCDNumber::Flat);
        puntuacion->setProperty("intValue", QVariant(0));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1010, 200, 321, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1030, 230, 321, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(820, 100, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(250, 250, 250);"));
        puntuacion_2 = new QLCDNumber(centralWidget);
        puntuacion_2->setObjectName(QString::fromUtf8("puntuacion_2"));
        puntuacion_2->setGeometry(QRect(900, 150, 81, 41));
        puntuacion_2->setFont(font2);
        puntuacion_2->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(247, 247, 247);"));
        puntuacion_2->setFrameShape(QFrame::Panel);
        puntuacion_2->setSegmentStyle(QLCDNumber::Flat);
        puntuacion_2->setProperty("intValue", QVariant(0));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(1020, 280, 321, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(910, 400, 61, 31));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(253, 253, 253);"));
        nivel = new QLCDNumber(centralWidget);
        nivel->setObjectName(QString::fromUtf8("nivel"));
        nivel->setGeometry(QRect(910, 440, 71, 41));
        nivel->setFont(font2);
        nivel->setLayoutDirection(Qt::LeftToRight);
        nivel->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(249, 249, 249);"));
        nivel->setFrameShape(QFrame::Panel);
        nivel->setSegmentStyle(QLCDNumber::Flat);
        nivel->setProperty("intValue", QVariant(0));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 70, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1080, 70, 71, 23));
        MainWindow->setCentralWidget(centralWidget);
        pushButton->raise();
        graphicsView->raise();
        pushButton_2->raise();
        label->raise();
        puntuacion->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        puntuacion_2->raise();
        label_5->raise();
        label_6->raise();
        nivel->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 3000, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Comenzar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Pausar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Puntuaci\303\263n Jugador 1", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Puntuaci\303\263n Jugador 2", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "NIVEL", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
