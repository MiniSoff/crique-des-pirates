/*!
  \file cartetresor.cpp
  \brief code de la classe CarteTresor

  Implementation des methodes de CarteTresor
  */

#include "ile.h"


Ile::Ile(QVector<CarteTresor*> cartesTresors, TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords)
{
    this->cartesTresors=cartesTresors;
    this->typeIle=typeIle;
    image = new PirateMapIsland::PirateMapIsland(cheminImage, 0, 0, background);
    this->coordsBateau=coords;
}

Ile::Ile(TYPEILE typeIle, QString cheminImage, PirateMapBackground *background, QPolygon coords)
{
    image = new PirateMapIsland::PirateMapIsland(cheminImage, 0, 0, background);

    QVector<CarteTresor*> petitTas;
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));
    petitTas.append(new CarteTresor::CarteTresor(0,0,0,0,":/resources/images/carts/tresor/modele_tresor.svg", background));

    this->cartesTresors=petitTas;
    this->typeIle=typeIle;
    this->coordsBateau=coords;
}

Ile::~Ile()
{
}

QVector<CarteTresor*> Ile::getCartesTresors()
{
    return cartesTresors;
}


PirateMapIsland * Ile::getImage()
{
    return image;
}

QPolygon Ile::getCoordsBateau()
{
    return this->coordsBateau;
}

void Ile::changerCarte(int nbTour)
{
    cartesTresors[nbTour-1]->getImage()->hide();
    cartesTresors[nbTour]->getImage()->show();
}

