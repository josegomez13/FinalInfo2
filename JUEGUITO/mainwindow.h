#ifndef MAINWINDOW_H
#define MAINWINDOW_H


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
    QString nombre_usuario; // Variable que guardará el nombre del usuario
    int guardar = 0;
    bool multijugador = false;
    int seleccion_personaje, seleccion_personaje2 = 1; //entero que dice cual de los dos personajes se escogió
    int distancia_recorrida; // distancia recorrida por el personaje en el "trote"
    QMessageBox msgBox; //Varible Cuadro de texto
    distancia *metros; //puntero metros de la clase distancia
    bolita *personaje_principal; //puntero para el personaje principal con los atributos de la clase bolita :3

    QList<obstaculo*>Obstaculos;
    QGraphicsScene *scene;
    //void keyPressEvent(QKeyEvent *evento); //reconocer cuando una tecla ha sido presionada

public slots:
    void moverObjetos();
};
#endif // MAINWINDOW_H
