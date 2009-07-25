/*!
  \file BateauPNJ2.h
  \brief header de la classe BateauPNJ2

  \author Pirates' crew

  Un bateauPNJ2 represente un joueur non humain de notre jeu
  Ce joueur non humain possède une IA propre (différente de PNJ)
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#include "bateaupnj2.h"
#include "combats.h"

BateauPNJ2::BateauPNJ2(QString name,int type,QString cheminImage,PirateMapBackground *background, Des *desTemp )
{
    canon=5;
    voile=3;
    equipage=5;
    coque=3;
    coffre=0;
    renommeeDeroute=1;
    renommee=0;
    doublon=1;
    typeBateau=type;
    image = new PirateMapBoat::PirateMapBoat(cheminImage, 0, 0, background );
    nom=name;
    des=*desTemp;
}

void BateauPNJ2::naviguer(Partie * partie)
{
    int PosPL1=partie->getJoueurs()[3]->getPosition();
    int PosPL2=partie->getJoueurs()[4]->getPosition();

    if (this->valeurCoqueCoffre() - coffre < 2){
        goToPosition(5, partie);
    }
    else {
        int max=0;
        int destination=0;
        for (int i=0; i<=4 ; i++){
            if (partie->getIle()[i]->getCartesTresors()[partie->getNTour()-1]->getRenomee()>max&&PosPL1!=i&&PosPL2!=i){
                max=partie->getIle()[i]->getCartesTresors()[partie->getNTour()-1]->getRenomee();
                destination=i;
            }
        }
        goToPosition(destination, partie);
    }
}


void BateauPNJ2::effetDesIles()
{
  int doublonOld=doublon;

  switch(position)
  {
      case 0 :
      //todo
      break;
      case 1:
      while(doublon-(coque+1)/2>doublonOld/2&&coque<9)
      {
      this->ameliorerSection(1,Bateau::Coque);
          }
      break;
      case 2:
      while(doublon-(voile+1)/2>doublonOld/2&&voile<9)
      {
      this->ameliorerSection(1,Bateau::Voile);
          }
      break;
      case 3:
      while(doublon-(canon+1)/2>doublonOld/2&&canon<9)
      {
      this->ameliorerSection(1,Bateau::Canon);
          }
      break;
      case 4:
      while(doublon-(equipage+1)/2>doublonOld/2&&equipage<9)
      {
      this->ameliorerSection(1,Bateau::Equipage);
          }
      break;
      case 5 :
      this->deposerTresors();
      break;
  }
}

int BateauPNJ2::tirerBordee(Combats *combat)
{
    int cible=-1;

    for (int i=0; i< combat->getCombattants().size();i++){
        if (combat->getCombattants()[i]->getTypeBateau()>=3){
            cible = i;
        }
    }
    if (cible == -1){
        cible = 0;
        if (combat->getCombattants()[0]->getNom()==this->getNom()){
            cible=1;
        }
        // faire voile le plus fort puis tir sur voile
        for(int i=0; i< combat->getCombattants().size();i++){
            if (combat->getCombattants()[i]->getNom()!=this->getNom()){
                if (combat->getCombattants()[i]->nbTirPossible()< combat->getCombattants()[cible]->nbTirPossible()){
                    cible=i;
                }
            }
        }
    }
    Bateau *batCible = combat->getCombattants()[cible];
    if (batCible->getTypeBateau()>=3){
        attaquer(combat->getCombattants()[cible], Bateau::Coque);
    }
    else if(batCible->getCanons()<=batCible->getVoile() && batCible->getCanons()<=batCible->getEquipage()&&batCible->getCanons()<=batCible->getCoque()){
        attaquer(combat->getCombattants()[cible], Bateau::Canon);
    }
    else if(batCible->getCoque()<=batCible->getVoile()&&batCible->getCoque()<=batCible->getEquipage()){
        attaquer(combat->getCombattants()[cible], Bateau::Coque);
    }
    else if(batCible->getEquipage()<=batCible->getVoile()){
        attaquer(combat->getCombattants()[cible], Bateau::Equipage);
    }
    else {
        attaquer(combat->getCombattants()[cible], Bateau::Voile);
    }
    return cible;
}

void BateauPNJ2::reparer()
{
if(voile<=0)
    {
    voile = 2;
    emit changementVoile(voile);
}if(canon<=0)
    {
    canon = 2;
    emit changementCanon(canon);
}
if(equipage<=0)
{
    equipage=2;
    emit changementEquipage(equipage);
}
if(coque<=0)
{
    coque=2;
    emit changementCoque(coque);
}
}
