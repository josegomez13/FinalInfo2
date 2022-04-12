#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

// MIS CLASES
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    //
    // métodos propios

    bool EuvalarColision(void);
    //void keyPressEvent(QKeyEvent *evento);

    //
    QTimer *controladorEventos;
    bool bandera;
    Nube *nubePrueba;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    //void keyPressEvent(QKeyEvent *evento); //reconocer cuando una tecla ha sido presionada

public slots:
};
#endif // MAINWINDOW_H
