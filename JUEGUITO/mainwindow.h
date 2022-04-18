#define MAINWINDOW_H
#include <QMainWindow>
#include <QList> // para utilizar el Qlist
#include <QDebug>// para imprimir mensajes en la terminal
#include <QMessageBox> // para imprimir mensajes como recuadros
#include <QVector> // para usar los Qvector
#include <iostream>//Flujo de entrada y salida para leer los archivos
#include <fstream> // para los archivos
#include <QRectF>
#include <iterator>
#include <QMessageBox>
#include <QListWidget>
#include <nube.h>
#include <QTimer>
//#include <QMediaPlayer>



#include <QGraphicsScene>
#include <QGraphicsView>
// MIS CLASES
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class mainwindow : public Qmainwindow
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

    public
    mainwindow(QTimer *controladorEventos, bool bandera, Nube *nubePrueba, Ui::MainWindow *ui, QGraphicsScene *scene); slots:
};
#endif // MAINWINDOW_H
