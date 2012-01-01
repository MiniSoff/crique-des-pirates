/*!
  \file BateauPL.h
  \brief header de la classe BateauPL

  \author Pirates' crew

  Un bateauPL represente un pirate de legende de notre jeu
  Chaque pirate de legende est une instance de ce bateau
  Contient l'implementation des methodes spécifiques comme naviguer, tirer une bordée ou réparer

  */

#include "bateaupl.h"
#include "combats.h"

BateauPL::BateauPL(QString name,int type,QString cheminImage,PirateMapBackground *background,Des *desTemp )
{
    canon=6;
    voile=21;
    equipage=6;
    coque=8;
    coffre=0;
    renommeeDeroute=6;
    renommee=0;
    doublon=0;
    typeBateau=type;
    image = new PirateMapBoat::PirateMapBoat(cheminImage, 0, 0, background );
    nom=name;
    des=*desTemp;
    emit changementCanon(nbTirPossible());
}


void BateauPL::naviguer(Partie * partie)
{
    if(position>4)
    {
        this->goToPosition(0, partie);
    }
    else
    {
        this->goToPosition(position+1, partie);
    }
}

int BateauPL::tirerBordee(Combats *combat)
{
    int cible=0;
    if (combat->getCombattants()[0]->getNom()==this->getNom()){
        cible=1;
    }
    // faire voile le plus fort puis tir sur voile
    for(int i=0; i< combat->getCombattants().size();i++){
        if (combat->getCombattants()[i]->getNom()!=this->getNom()){
            if (combat->getCombattants()[i]->getCanons()> combat->getCombattants()[cible]->getCanons()){
                cible=i;
            }
        }
    }
    attaquer(combat->getCombattants()[cible], Bateau::Canon);
    return cible;
}
void BateauPL::reparer()
{
    canon=6;
    voile=21;
    equipage=6;
    coque=8;
    emit changementCanon(canon);
    emit changementCoque(coque);
    emit changementEquipage(equipage);
    emit changementVoile(voile);
}
