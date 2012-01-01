/*!
  \file partie.h
  \brief header de la classe Partie

  \author Pirates' crew

 La classe partie g�re le d�roulement de la partie.
 Envoi les signaux de d�but et de fin de tour � l'ui

  */
#ifndef PARTIE_H
#define PARTIE_H

#include "ile.h"
#include "des.h"
#include <stdlib.h>


class MainWindow;
class Bateau;
class Combats;

/*!
  \class Partie
  */
class Partie : public QObject
{
    /*!
      \macro permet d'utiliser les signaux
      */
    Q_OBJECT

    public:
        /*!
          constructeur de Partie
          \param MainWindow pointeur vers la mainWindow
          \param Des des permettant
          \fn Bateau()
          */
        Partie(MainWindow *w, Des des);

        /*!
          methode qui gere la phase de navigation des navires
          \fn phaseNavigation(int destination)
          \param destination destination du joueur
          */
        void phaseNavigation(int destination);

        /*!
          methode qui gere les combats
          \fn phaseCombat()
          */
        void phaseCombat();

        /*!
          methode qui gere la phase pillage
          \fn phasePillage()
          */
        void phasePillage();

        /*!
          methode qui gere la phase effet des iles
          \fn phaseEffetDesIles()
          */
        void phaseEffetDesIles();

        /*!
          methode qui gere la fin du tour (mouvement des PL)
          \fn phaseFinDuTour()
          */
        void phaseFinDuTour();

        /*!
          methode qui gere la reparation de fin de tour
          \fn phaseReparation()
          */
        void phaseReparation();

        /*!
          methode qui gere l'affichage des donnees initialisees
          \fn initialisationPartie()
          */
        void initialisationPartie();

        /*!
          methode qui determine le gagnant de la partie
          \fn gagnant()
          \return liste liste des gagnants de la partie
          */
        QStringList gagnant();

        /*!
          methode qui affiche les iles sur la carte
          \fn placerLesIles()
          */
        void placerLesIles();

        /*!
          methode qui affiche les bateaux sur la carte (initialisation)
          \fn placerLesBateaux()
          */
        void placerLesBateaux();

        /*!
          methode qui affecte les cartes tresor a une ile
          \fn placerLesCartesTresors(Ile*,int)
          \param *ile l'ile sur laquelle les cartes vont etre placees
          \param numIle numero de l'ile concernee (0 a 4)
          */
        void placerLesCartesTresors(Ile*,int);

        /*!
          getter de l'attribut liste joueurs
          \fn getJoueurs()
          \return listeJoueurs liste des joueurs
          */
        QVector<Bateau*> getJoueurs();

        /*!
          getter de l'attribut liste iles
          \fn getIle()
          \return listeIles liste des iles
          */
        QVector<Ile*> getIle();

        /*!
          getter de l'attribut NTour
          \fn getNTour()
          \return NTour numero du tour
          */
        int getNTour();
        void emitSignalPartieLogger(QString);

    public slots:

        void slotJouer(int);
        void slotFinDuTour();
        void slotAmeliorerSection(int);
        void slotInitAmeliorerVoile(int);
        void slotInitAmeliorerEquipage(int);
        void slotInitAmeliorerCanons(int);
        void slotInitAmeliorerCoque(int);

    signals :

        /*!
          signal qui desactive les sliders
          \param bool true
          */
        void disableSliders(bool);

        /*!
          signal qui annonce la fin du tour
          \param bool true
          */
        void finDuTour(bool);

        /*!
          signal qui annonce le debut du tour
          \param bool true
          */
        void debutDuTour(bool);

        /*!
          signal qui donne la liste des gagnants
          \param liste liste des gagnants
          */
        void finPartie(QStringList);

        /*!
          signal qui donne le numero du tour
          \param int numero du tour
          */
        void signalNumTour(int);

        /*!
          signal qui annonce la fin de l'initialisation
          \param bool true
          */
        void finInitialisation2(bool);
        void signalPartieLogger(QString);

    private :

        QVector<Bateau*> joueurs;
        QVector<Ile*> iles;
        int nTour;
        Des des;

};

#endif // PARTIE_H
