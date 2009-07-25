/*!
  \file cartetresor.cpp
  \brief code de la classe CarteTresor

  Implementation des methodes de CarteTresor
  */

#include "cartetresor.h"

CarteTresor::CarteTresor()
{
}

CarteTresor::~CarteTresor()
{
    delete image;
}

CarteTresor::CarteTresor(int renomee, int doublons, int tresors, int taverne, QString cheminImage, PirateMapBackground *background)
{
    this->renomee=renomee;
    this->doublons=doublons;
    this->tresors=tresors;
    this->taverne=taverne;
    image = new PirateMapCarteTresor::PirateMapCarteTresor(cheminImage, 500, 500, background );
}

int CarteTresor::getRenomee(){
    return renomee;
}

int CarteTresor::getDoublons(){
    return doublons;
}

int CarteTresor::getTresors(){
    return tresors;
}

int CarteTresor::getTaverne(){
    return taverne;
}

PirateMapCarteTresor * CarteTresor::getImage()
{
    return image;
}
