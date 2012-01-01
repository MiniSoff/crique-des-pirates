/*!
  \file bateau.cpp
  \brief code de la classe Bateau

  \author Pirates' crew

  Cette classe implemente les methodes non virtuelles de bateau.h

  */

#include "bateau.h"
#include "combats.h"

Bateau::Bateau()
{
}

Bateau::Bateau(QString name,int type,QString cheminImage,PirateMapBackground *background, Des *desTemp )
{
    canon=2;
    voile=2;
    equipage=2;
    coque=2;
    coffre=0;
    renommeeDeroute=1;
    renommee=0;
    doublon=9;
    typeBateau=type;
    image = new PirateMapBoat::PirateMapBoat(cheminImage, 0, 0, background );
    nom=name;
    des=*desTemp;
}

Bateau::~Bateau()
    {
        delete image;
    }

int Bateau::nbTirPossible()
    {
    return ((min(canon,equipage)+1)/2+1);
    }

void Bateau::attaquer(Bateau * cible, Section section)
{
    int nbDgt = des.gagne(5,nbTirPossible());
    cible->recevoirDgts(nbDgt,section);
    emit signalPartieLogger(this->getNom()+" infilge " +QString::number(nbDgt)+ " à la section : " + section+" de " + cible->getNom());
}

void Bateau::augmenterSection(int nbAmeliorations, Section section)
{   //le code de chaque cas est le même adapté à chaque section
    switch( section ) {
      case Voile:
        //on vérifie que l'on est pas déjà aléliorer au max
        while(voile<9&&nbAmeliorations>0&&doublon - (voile+1)/2>0)
        {
            nbAmeliorations--;
            doublon=doublon - (voile+1)/2;
            voile++;
        }
        //on continu tant qu'il reste du fric!!
        emit changementDoublons(doublon);
        emit changementVoile(voile);
        emit valeurVoile(valeurVoilure());
      break;

      case Equipage:

while(equipage<9&&nbAmeliorations>0&&doublon - (equipage+1)/2>0)
        {
            nbAmeliorations--;
            doublon=doublon - (equipage+1)/2;
            equipage++;
        }
        emit changementDoublons(doublon);
        emit changementEquipage(equipage);
        emit valeurEquipage((equipage+1)/2+1);

      break;

      case Canon:

     while(canon<9&&nbAmeliorations>0&&doublon - (canon+1)/2>0)
        {
            nbAmeliorations--;
            doublon=doublon - (canon+1)/2;
            canon++;
        }
        emit changementDoublons(doublon);
        emit changementCanon(canon);
        emit valeurCanon((canon+1)/2+1);

      break;
      case Coque:
      while(coque<9&&nbAmeliorations>0&&doublon - (coque+1)/2>0)

        {
            nbAmeliorations--;
            doublon=doublon - (coque+1)/2;
            coque++;
        }
        emit changementDoublons(doublon);
        emit changementCoque(coque);
        emit valeurCoque(valeurCoqueCoffre());

      break;
   }

    if(nbAmeliorations!=0&&this->typeBateau==0)
    {
        emit ameliorationImpossible();
    }

}

void Bateau::reparer()
{
}


void Bateau::recevoirDgts(int nbDgts, Section section)
{
    //pas de test sur la valeur positive ou non. Ce n'est pas grave les réparations sont gratuites.
    switch( section )
    {
      case Voile:
         voile = voile-nbDgts;
         emit changementVoile(voile);
         emit valeurVoile(valeurVoilure());
      break;
      case Equipage:
         equipage=equipage-nbDgts;
         emit changementEquipage(equipage);
         emit valeurEquipage((equipage+1)/2+1);
      break;

      case Canon:
         canon=canon-nbDgts;
         emit changementCanon(canon);
         emit valeurCanon((canon+1)/2+1);
      break;

      case Coque:
        coque=coque-nbDgts;
        emit changementCoque(coque);
        emit valeurCoque(valeurCoqueCoffre());
      break;
   }
}

void Bateau::recupererCarteTresors(CarteTresor *carte, Des des){
    if(this->position < 5)
    {
    this->renommee=this->renommee+carte->getRenomee();
    this->doublon=this->doublon+carte->getDoublons();
    this->coffre=this->coffre+carte->getTresors();
    for (int i=0; i<carte->getTaverne();i++)
    {
        this->renommee=this->renommee+des.renommeeTaverne();
    }
    emit changementRenommee(renommee);
    emit changementDoublons(doublon);
    emit changementTresors(coffre);
    }
}

int Bateau::valeurCoqueCoffre()
{
    if (coque<=7){
        return (coque + 3);
    }
    else
        return 12;
}
int Bateau::valeurVoilure()
{
    if (voile<=7){
        return (voile + 3);
    }
    else
        return 12;
}

void Bateau::verifierCoffre()
{
    if (coffre > valeurCoqueCoffre())
    {
        coffre = valeurCoqueCoffre();
        emit changementTresors(coffre);
    }
}

bool Bateau::enVie()
{
    if(voile<=0||equipage<=0||canon<=0||coque<=0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Bateau::deposerTresors()
    {
        renommee = renommee+coffre;
        coffre=0;
        emit changementRenommee(renommee);
        emit changementTresors(coffre);
    }

void Bateau::deposerDoublons(int nbDoublons)
    {
        renommee = renommee + nbDoublons/3;
        doublon = doublon - nbDoublons/3;
        emit changementRenommee(renommee);
        emit changementDoublons(doublon);
    }

void Bateau::goToPosition(int position, Partie *partie)
    {
        emit positionBateau(this->position);
        this->position=position;
        this->image->goToPosition(position, partie->getIle()[position]->getCoordsBateau().point(typeBateau));
if(position==5||position==6)
     {
        emit disableSlidersBateau(true);
    }
    }

void Bateau::naviguer(Partie*)
{}
void Bateau::naviguer(int, Partie*)
{}

int Bateau::getVoile()
{
    return voile;
}

int Bateau::getCanons()
{
    return canon;
}
int Bateau::getCoque()
{
    return coque;
}
int Bateau::getEquipage()
{
    return equipage;
}

int Bateau::getPosition()
{
    return position;
}
int Bateau::getRenommee()
{
    return renommee;
}
int Bateau::getTresors()
{
    return coffre;
}
int Bateau::getDoublons()
{
    return doublon;
}

void Bateau::emettreAmeliorationImpossible()
{
    emit ameliorationImpossible();
}

void Bateau::emettreChgCanon()
{
    emit changementCanon(canon);
}
void Bateau::emettreChgCoque()
{
    emit changementCoque(coque);
}

void Bateau::emettreChgEquipage()
{
    emit changementEquipage(equipage);
}
void Bateau::emettreChgVoile()
{
    emit changementVoile(voile);
}
void Bateau::initialiserLabel()
{
    emit changementCanon(canon);
    emit changementEquipage(equipage);
    emit changementVoile(voile);
    emit changementCoque(coque);
    emit changementRenommee(renommee);
    emit changementDoublons(doublon);
    emit changementTresors(coffre);
    emit positionBateau(position);
    emit valeurCanon((canon+1)/2+1);
    emit valeurCoque(valeurCoqueCoffre());
    emit valeurVoile(valeurVoilure());
    emit valeurEquipage((equipage+1)/2+1);
    emit valeurNom(nom);
}

void Bateau::desactiverSliders()
{
    emit positionCanon(false);
    emit positionCoque(false);
    emit positionEquipage(false);
    emit positionVoile(false);
}

void Bateau::effetDesIles()
{
}

int Bateau::tirerBordee(Combats *combat)
{
    return 0;
}

int Bateau::getTypeBateau()
{
    return typeBateau;
}

void Bateau::slotCombattreBateauPJ(int,int, Combats*)
{
}
QString Bateau::getNom()
{
    return nom;
}

void Bateau::ameliorerSection(int nbAmeliorations,Section section)
{
    if(nbAmeliorations<=0)
    {
        reduireSection(nbAmeliorations,section);
    }
    else
    {
        augmenterSection(nbAmeliorations,section);
    }
}

void Bateau::reduireSection(int nbAmeliorations,Section section)
{
    switch( section ) {
      case Voile:
        //on vérifie que l'on est pas déjà aléliorer au max
        while(voile<9&&voile>2&&nbAmeliorations<0)
        {
            nbAmeliorations++;
            doublon=doublon + (voile)/2;
            voile--;
        }
        //on continu tant qu'il reste du fric!!
        emit changementDoublons(doublon);
        emit changementVoile(voile);
        emit valeurVoile(valeurVoilure());
      break;

      case Equipage:

while(equipage<9&&equipage>2&&nbAmeliorations<0)
        {
            nbAmeliorations++;
            doublon=doublon + equipage/2;
            equipage--;
        }
        emit changementDoublons(doublon);
        emit changementEquipage(equipage);
        emit valeurEquipage((equipage+1)/2+1);

      break;

      case Canon:

     while(canon<9&&canon>2&&nbAmeliorations<0)
        {
            nbAmeliorations++;
            doublon=doublon + (canon)/2;
            canon--;
        }
        emit changementDoublons(doublon);
        emit changementCanon(canon);
        emit valeurCanon((canon+1)/2+1);

      break;
      case Coque:
      while(coque<9&&coque>2&&nbAmeliorations<0)

        {
            nbAmeliorations++;
            doublon=doublon + coque/2;
            coque--;
        }
        emit changementDoublons(doublon);
        emit changementCoque(coque);
        emit valeurCoque(valeurCoqueCoffre());

      break;
   }

    if(nbAmeliorations!=0&&this->typeBateau==0)
    {
        emit ameliorationImpossible();
    }
}

void Bateau::setRenommee(int renom)
{
   this->renommee=this->renommee+renom;
}

int Bateau::getRenommeeDeroute()
{
    return renommeeDeroute;
}
