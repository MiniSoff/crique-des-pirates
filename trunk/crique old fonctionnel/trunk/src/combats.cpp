/*!
  \file combats.h
  \brief header de la classe Combats

  \author Pirates' crew

  La classe Combats prend en paramètre une liste de combattants et gere le combat entre ces combattants

  */

#include "combats.h"

Combats::Combats(QVector<Bateau*> combattantsIle)
{
    this->combattants=combattantsIle;
}

void Combats::combattre(Partie *partie)
{
   while(combattants.size()>1)
    {
        ordreDeTir();
        tirerUneBordeePourChaqueBateau(partie);
    }

}

void Combats::ordreDeTir() {
    std::sort(combattants.begin(), combattants.end(), sortBateauByVoile());
}

void Combats::tirerUneBordeePourChaqueBateau(Partie *partie) {
    int idCible=0;
    for (int i = 0; i < combattants.size(); i++) {
        if (combattants.size() > 1) {
            idCible = combattants[i]->tirerBordee(this);
            if (!combattants[idCible]->enVie()) {
                if (combattants[idCible]->getTypeBateau() != 3) {
                    combattants[idCible]->goToPosition(6, partie);
                    emit partie->emitSignalPartieLogger(combattants[idCible]->getNom() + " fuit vers la crique des pirates");
                }
                else
                {
                  emit partie->emitSignalPartieLogger("Le pirate de légende "+combattants[idCible]->getNom() + " a coulé");
                }
                int renommeeDeroute = combattants[idCible]->getRenommeeDeroute();
                QString derouteNom = combattants[idCible]->getNom();
                combattants.remove(idCible);
                for(int j=0;j<combattants.size();j++)
                {
                    combattants[j]->setRenommee(renommeeDeroute);
                    emit partie->emitSignalPartieLogger(combattants[i]->getNom()+" a gagné un point de renommée pour avoir mis en déroute "+derouteNom);
                }
                if(idCible<i)
                {
                    i--;
                }
            }
        }
    }
}


bool Combats::bateauxEnVie()
{
    bool res=true;
    for(int i=0;i<combattants.size();i++)
    {
        res=res&&combattants[i]->enVie();
    }

    return res;
}


QVector<Bateau*> Combats::getCombattants()
{
    return combattants;
}
