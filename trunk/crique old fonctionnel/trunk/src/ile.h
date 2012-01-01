/*!
  \file cartetresor.h
  \brief header de la classe CarteTresor

  Cette classe represente l'objet carte tresor
  */

#ifndef ILE_H
#define ILE_H

#include<QtCore/QString>
#include<QVector>
#include<QPolygon>

#include "cartetresor.h"
#include "piratemapbackground.h"
#include "piratemapisland.h"
#include <stdlib.h>

class Bateau;

/*!
  \class Ile
  */
class Ile
{

public:

    /*!
      \enum les differentes iles du jeu
      */
       enum TYPEILE
   {
      Taverne=1,
      Coque=2,
      Voile=3,
      Canon=4,
      Equipage=5,
      Tresors=6,
      Crique=7

   };

    /*!
      constructeur pour les iles qui comportent des cartes tresor
      \fn Ile(QVector<CarteTresor*> cartesTresors, TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords)
      \param cartesTresors vecteur des cartes tresor de l'ile
      \param typeIle l'ile du jeu
      \param cheminImage le chemin vers l'image qui la represente
      \param *background le widget parent de l'image
      \param coords un polygone de coordonnees pour avoir plusieurs bateaux a la meme ile mais pas au meme point
      */
    Ile(QVector<CarteTresor*> cartesTresors, TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords);

     /*!
      constructeur pour les iles qui n'ont pas de cartes tresor
      \fn Ile(TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords)
      \param typeIle l'ile du jeu
      \param cheminImage le chemin vers l'image qui la represente
      \param *background le widget parent de l'image
      \param coords un polygone de coordonnees pour avoir plusieurs bateaux a la meme ile mais pas au meme point
      */
    Ile(TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords);

    /*!
      destructeur de l'ile
      \fn ~Ile()
      */
    ~Ile();

    //void pillage(Bateau &bateau);

    /*!
      getter du vecteur de cartes tresor de l'ile
      \fn getCartesTresors()
      \return QVector<CarteTresor*> le vecteur de cartes tresor
      */
    QVector<CarteTresor*> getCartesTresors();

    /*!
      getter de l'image de l'ile
      \fn getImage()
      \return PirateMapIsland* l'adresse de l'image
      */
    PirateMapIsland *getImage();

    /*!
      getter du polygone donnant differents points de coordonnees pour les bateau au large de l'ile
      \fn getCoordsBateau()
      \return QPolygon les coordonnees possibles des bateaux au large de l'ile
      */
    QPolygon getCoordsBateau();

     /*!
      methode qui permet de changer la carte de l'ile pour chaque tour
      \fn changerCarte(int nbTour)
      \param nbTour le numero du tour de jeu
      */
    void changerCarte(int nbTour);

    private :

        TYPEILE typeIle;
        QVector<CarteTresor*> cartesTresors;
        PirateMapIsland *image;
        QPolygon coordsBateau;
        QVector<Bateau*> bateauPresent;

};

#endif // ILE_H
