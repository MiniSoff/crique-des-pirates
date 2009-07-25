/*!
  \file BateauPL.h
  \brief header de la classe BateauPL

  \author Pirates' crew

  Un bateauPL represente un pirate de legende de notre jeu
  Chaque pirate de legende est une instance de ce bateau
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#ifndef BATEAUPL_H
#define BATEAUPL_H
#include <QVector>
#include "piratemapbackground.h"
#include "piratemapboat.h"
#include "bateau.h"

class BateauPL : public Bateau
{
public:

    /*!
      constructeur de BateauPL
      \fn Bateau(QString name,int type,QString cheminImage, PirateMapBackground *background)
      \param name nom du bateau pour pouvoir l'afficher dans la comboBox et à tester l'identité du bateau
      \param type le joueur que l'on cree
      \param cheminImage le chemin vers l'image representant le bateau
      \param *background le widget qui contient l'image du bateau
      */
    BateauPL(QString name,int type,QString cheminImage, PirateMapBackground *background, Des *des);

    /*!
      methode virtuelle qui permet de naviguer (se positionner sur une ile) en fonction du choix de l'IA
      \fn naviguer(int, Partie *)
      \param position la position (ile) de destination
      \param *partie partie en cours pour avoir le contenu des iles (et donc les coordonnées futures du bateau)
      */
    virtual void naviguer(Partie * partie);

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

#endif // BATEAUPL_H
