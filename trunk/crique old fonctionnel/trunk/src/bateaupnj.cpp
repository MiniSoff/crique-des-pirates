/*!
  \file BateauPNJ.h
  \brief header de la classe BateauPNJ

  \author Pirates' crew

  Un bateauPNJ represente un joueur non humain de notre jeu
  Ce joueur non humain possède une IA propre
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#include "bateaupnj.h"
#include "combats.h"

BateauPNJ::BateauPNJ(QString name,int type,QString cheminImage,PirateMapBackground *background,Des *desTemp )
{
    canon=3;
    voile=5;
    equipage=3;
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
void BateauPNJ::naviguer(Partie * partie)
{
    int PosPL1=partie->getJoueurs()[3]->getPosition();
    int PosPL2=partie->getJoueurs()[4]->getPosition();

    if (this->valeurCoqueCoffre() - coffre < 2){
        goToPosition(5, partie);
    }
    else if(canon<=voile&&canon<=equipage&&canon<=coque&&PosPL1!=3&&PosPL2!=3){
        goToPosition(3, partie);
    }
    else if(coque<=voile&&coque<=equipage&&PosPL1!=1&&PosPL2!=1){
        goToPosition(1, partie);
    }
    else if(equipage<=voile&&PosPL1!=4&&PosPL2!=4){
        goToPosition(4, partie);
    }
    else if(voile<equipage&&PosPL1!=2&&PosPL2!=2){
        goToPosition(2, partie);
    }
    else
        goToPosition(0, partie);
}


void BateauPNJ::effetDesIles()
{
  switch(position)
  {
      case 0 :
      //todo
      break;
      case 1:
      while(doublon-(coque+1)/2>0&&coque<9)
      {
      this->ameliorerSection(1,Bateau::Coque);
          }
      break;
      case 2:
      while(doublon-(voile+1)/2>0&&voile<9)
      {
      this->ameliorerSection(1,Bateau::Voile);
          }
      break;
      case 3:
      while(doublon-(canon+1)/2>0&&canon<9)
      {
      this->ameliorerSection(1,Bateau::Canon);
          }
      break;
      case 4:
      while(doublon-(equipage+1)/2>0&&equipage<9)
      {
      this->ameliorerSection(1,Bateau::Equipage);
          }
      break;
      case 5 :
      this->deposerTresors();
      break;
  }
}

int BateauPNJ::tirerBordee(Combats *combat)
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

void BateauPNJ::reparer()
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
