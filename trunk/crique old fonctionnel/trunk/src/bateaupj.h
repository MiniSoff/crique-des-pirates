/*!
  \file BateauPJ.h
  \brief header de la classe BateauPJ

  \author Pirates' crew

  Un bateauPJ represente un joueur humain de notre jeu
  Chaque joueur humain est une instance de ce bateau
  Contient l'implementation des methodes sp�cifiques comme naviguer, tirer une bord�e ou r�parer

  */

#ifndef BATEAUPJ_H
#define BATEAUPJ_H
#include <stdlib.h>
#include <QVector>
#include "piratemapbackground.h"
#include "piratemapboat.h"
#include "bateau.h"
//#include <QTest>
class BateauPJ : public Bateau
{
    /*!
      \macro permet d'utiliser les signaux
      */
    Q_OBJECT

public:

    /*!
      constructeur de BateauPJ
      \fn Bateau(QString name,int type,QString cheminImage, PirateMapBackground *background)
      \param name nom du bateau pour pouvoir l'afficher dans la comboBox et � tester l'identit� du bateau
      \param type le joueur que l'on cree
      \param cheminImage le chemin vers l'image representant le bateau
      \param *background le widget qui contient l'image du bateau
      */
    BateauPJ(QString name,int type,QString cheminImage, PirateMapBackground *background, Des *des);

    /*!
      methode virtuelle qui permet de naviguer (se positionner sur une ile) en fonction du choix du joueur
      \fn naviguer(int, Partie *)
      \param position la position (ile) de destination
      \param *partie partie en cours pour avoir le contenu des iles (et donc les coordonn�es futures du bateau)
      */
    virtual void naviguer(int, Partie *);

    /*!
      methode virtuelle qui d�signe la cible et la section choisie par le joueur pour attaquer
      \fn tirerBordee(Combats*)
      \param *combat contenu du combat, dont les adversaires du bateau
      \return cible bateau vise lors de la bordee
      */
    virtual int tirerBordee(Combats*);

    /*!
      methode virtuelle qui repare le bateau quand il se retrouve a la crique des pirates
      \fn reparer
      */
    virtual void reparer();
    virtual void effetDesIles();

public slots :

        virtual void slotCombattreBateauPJ(int,int, Combats*);

private:

    int cible;

};

#endif // BATEAUPJ_H
