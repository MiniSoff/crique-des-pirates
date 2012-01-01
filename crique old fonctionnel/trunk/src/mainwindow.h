/*!
  \file mainwindow.h
  \brief header de la classe MainWindow

  \author Pirates' crew

  La mainWindow affiche l'ensemble des objets graphiques.
  effectue les connections entre le joueur humain et le jeu

  */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QGraphicsView>
#include <QVector>
#include "bateau.h"
#include "partie.h"
#include "combats.h"
#include <stdlib.h>


/*
class QtStateMachine;
class QtState;
*/


class PirateMapBackground;
class PirateMapIsland;
class PirateMapBoat;
class PirateMapCarteTresor;


namespace Ui
{
    class MainWindow;
}

/*
Cette classe est la classe principale de l'interface.
Elle g�re le chargement de tous les widgets (boutons, graphicView...).
Elle utilise l'interface g�n�r�e par qt Designer.
  */
class MainWindow : public QMainWindow
{
    /*!
      \macro permet d'utiliser les signaux
      */
    Q_OBJECT

public:
    /*!
      constructeur par defaut de Bateau
      \fn MainWindow(QWidget *parent = 0)
      \param QWidget parent, ici rien du tout, la main window est la fenetre principale
      */
    MainWindow(QWidget *parent = 0);
    /*!
      destructeur par d�faut de MainWindow
      \fn ~MainWindow()
      */
    ~MainWindow();


    void start();
    /*!
      getteur de la scene
      \fn getScene()
      \return la scene de type QGraphicsScene
      */
    QGraphicsScene getScene();
    /*!
      getteur du background
      \fn getBackground()
      \return un pointeur vers le background de la carte du monde
      */
    PirateMapBackground * getBackground();
    /*!
      Cette m�thode permet de connecter les labels, sliders, autres �l�ment de la
      GUI avec le model.
      \fn connecterLesLabels(QVector<Bateau*> joueurs)
      \param  QVector<Bateau*> joueurs vecteur de pointeur vers les Bateaux du model.
      */
    void connecterLesLabels(QVector<Bateau*> joueurs);
    /*!
      Cette m�thode permet de connecter les labels, sliders, autres �l�ment de la
      GUI avec le model. En particulier les evenements cl�s du d�roulement de la partie.
      \fn connecterLesLabels(Partie *partie)
      \param Partie *partie pointeur vers l'objet partie utilis� dans le model.
      */
    void connecterWindowPartie(Partie *partie);



private:
    Ui::MainWindow *ui;

    /*
    QtStateMachine *m_machine;
    QtState *m_s1;
    QtState *m_s2;
    QtState *m_s3;
    QtState *m_taverne;
    QtState *m_coque;
    */

    QGraphicsScene *m_scene;

    PirateMapBackground *m_PirateMapBackground;
    QGraphicsRectItem *m_backgroundItem;
    QGraphicsRectItem *m_outlineItem;


    //QVector<PirateMapIsland*> m_PirateMapIslands;
    //QVector<PirateMapBoat*> m_PirateMapBoats;
    //QVector<PirateMapCarteTresor*> m_PirateMapCartesTresor;


    // QFile *m_file;
    // QFile *m_file_2;
    // QGraphicsItem *m_svgItem;
    // QGraphicsItem *m_svgItem_2;

signals :

        /*!
          Combat
          signal permettant de renvoyer la cible du joueur humain au model.
          \param int id de la cible dans la liste des combatant de combat
          \param int id de la section vis�e
          \param pointeur vers le combat concern�
          */
        void signalCible(int,int,Combats *);

private slots:

    void on_pushButton_clicked();

    /*!
     permet d'afficher la MessageBox am�lioration impossible
      */
    void slotAmeliorationImpossible();

     /*!
        affiche les inputDialog permettant de r�cup�rer la cible du personnage
        joueur lors d'un combat.
        \param pointeur vers le combat concern�
      */
    void slotCombattre(Combats*);

    /*!
      Permet d'afficher la MessageBox de fin de partie.
      \param QStringList liste des gagnants
      */
    void slotFinDePartie(QStringList);
};

#endif // MAINWINDOW_H
