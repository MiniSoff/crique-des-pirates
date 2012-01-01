/*!
  \file factory.h
  \brief header de la classe Factory

  Cette classe non instancee nous permet d'instancier nos elements de jeu au moyen de methodes statiques
  */

#ifndef FACTORY_H
#define FACTORY_H

#include <QVector>
#include "cartetresor.h"
#include "ile.h"
#include "bateau.h"
#include "bateaupj.h"
#include "bateaupnj.h"
#include "bateaupnj2.h"
#include "bateaupl.h"
#include <stdlib.h>

/*!
  \class Factory
  */
class Factory
{

public:

    /*!
      constructeur par defaut
      */
    Factory();

    /*!
      methode qui nous permet de generer les iles avec leurs images
      \fn genererLesIles(PirateMapBackground *background)
      \param *background le widget parent pour l'image
      \return QVector<Iles*> le vecteur des iles du jeu
      */
    static QVector<Ile*> genererLesIles(PirateMapBackground *background);

    /*!
      methode qui nous permet de generer les bateaux avec leurs images
      \fn genererLesBateaux(PirateMapBackground *background)
      \param *background le widget parent pour l'image
      \return QVector<Bateau*> le vecteur des bateaux du jeu
      */
    static QVector<Bateau*> genererLesBateaux(PirateMapBackground *background, Des *des);

    /*!
      methode qui nous permet de generer les cartes tresors avec leurs images
      \fn genererLesCartesTresors(PirateMapBackground *background)
      \param *background le widget parent pour l'image
      \return QVector<CarteTresor*> le vecteur des iles du jeu
      */
    static QVector<CarteTresor*> genererLesCartesTresors(PirateMapBackground *background);

    /*!
      methode qui nous permet de piocher 12 cartes pour chacune des iles
      \fn       genererLesIles(QVector<CarteTresor*> cartesTresors, int numIle)
      \param    cartesTresors     le vecteur de cartes tresors du jeu
       \return  numIle            le numero de l'ile
      */
    static QVector<CarteTresor*> piocher12CartesTresors(QVector<CarteTresor*> cartesTresors, int numIle);

};

#endif // FACTORY_H
