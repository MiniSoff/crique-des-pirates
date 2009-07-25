/*!
  \file BateauPJ.h
  \brief header de la classe BateauPJ

  \author Pirates' crew

  Un bateauPJ represente un joueur humain de notre jeu
  Chaque joueur humain est une instance de ce bateau
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#include "bateaupj.h"
#include "combats.h"
#include "windows.h"

BateauPJ::BateauPJ(QString name,int type,QString cheminImage,PirateMapBackground *background, Des *desTemp )
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

void BateauPJ::naviguer(int position, Partie *partie)
{
    // les sliders seront desactivé à la fin du tour.
 goToPosition(position, partie);
 switch(position)
 {
     case 1 :
     {
        emit positionCoque(true);
        break;
     }
     case 2 :
     {
        emit positionVoile(true);
        break;
     }
     case 3 :
     {
        emit positionCanon(true);
        break;
     }
     case 4 :
     {
        emit positionEquipage(true);
        break;
     }
 }
}

int BateauPJ::tirerBordee(Combats *combat)
{
    emit combattre(combat);
    return this->cible;
}


void BateauPJ::slotCombattreBateauPJ(int cible, int section, Combats *combat)
{
    switch(section)
    {
        case 1:
    attaquer(combat->getCombattants()[cible],Bateau::Voile);
    break;
    case 2:
    attaquer(combat->getCombattants()[cible],Bateau::Equipage);
    break;
    case 3:
    attaquer(combat->getCombattants()[cible],Bateau::Canon);
    break;
    case 4:
    attaquer(combat->getCombattants()[cible],Bateau::Coque);
    break;
}
    this->cible=cible;
}

void BateauPJ::reparer()
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

void BateauPJ::effetDesIles()
{
    if(position==5)
    {
 deposerTresors();
}
}
