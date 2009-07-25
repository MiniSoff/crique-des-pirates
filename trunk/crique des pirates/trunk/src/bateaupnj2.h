/*!
  \file BateauPNJ2.h
  \brief header de la classe BateauPNJ2

  \author Pirates' crew

  Un bateauPNJ2 represente un joueur non humain de notre jeu
  Ce joueur non humain possède une IA propre (différente de PNJ)
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#ifndef BATEAUPNJ2_H
#define BATEAUPNJ2_H
#include <QVector>
#include "piratemapbackground.h"
#include "piratemapboat.h"
#include "bateau.h"

class BateauPNJ2: public Bateau
{

public:

    /*!
      constructeur de BateauPNJ2
      \fn Bateau(QString name,int type,QString cheminImage, PirateMapBackground *background)
      \param name nom du bateau pour pouvoir l'afficher dans la comboBox et à tester l'identité du bateau
      \param type le joueur que l'on cree
      \param cheminImage le chemin vers l'image representant le bateau
      \param *background le widget qui contient l'image du bateau
      */
    BateauPNJ2(QString name,int type,QString cheminImage,PirateMapBackground *background, Des *des);

    /*!
      methode virtuelle qui permet de naviguer (se positionner sur une ile) en fonction du choix de l'IA
      \fn naviguer(int, Partie *)
      \param position la position (ile) de destination
      \param *partie partie en cours pour avoir le contenu des iles (et donc les coordonnées futures du bateau)
      */
    virtual void naviguer(Partie *partie);

    /*!
      methode virtuelle qui gere l'amelioration d'une section choisie par l'IA
      \fn effetDesIles
      */
    virtual void effetDesIles();

    /*!
      methode virtuelle qui désigne la cible et la section choisie par l'IA pour attaquer
      \fn tirerBordee(Combats*)
      \param *combat contenu du combat, dont les adversaires du bateau
      \return cible bateau vise lors de la bordee
      */
    virtual int tirerBordee(Combats *combat);

    /*!
      methode virtuelle qui repare le bateau à la fin de chaque tour
      \fn reparer
      */
    virtual void reparer();
};

#endif // BATEAUPNJ2_H
