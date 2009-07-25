/*!
  \file combats.h
  \brief header de la classe Combats

  \author Pirates' crew

  La classe Combats prend en paramètre une liste de combattants et gere le combat entre ces combattants

  */

#ifndef COMBATS_H
#define COMBATS_H

#include "bateau.h"
#include <QVector>
#include "sortbateaubyvoile.h"
#include "partie.h"
#include <QObject>

class Combats
{

public:

    /*!
      constructeur de Combats
      \fn Combats(QVector<Bateau*> combattantsIle)
      \param combattantsIle liste des participants au combat
      */
    Combats(QVector<Bateau*> combattantsIle);

    /*!
      methode qui permet de gerer le combat (tirs, ordre de tir et fin du combat)
      \fn combattre(Partie *partie);
      \param *partie partie en cours pour avoir les donnees necessaires a la prise de decision de l'IA
      */
    void combattre(Partie *partie);

    /*!
      methode qui permet d'ordonner les combattants selon leur Voile
      \fn ordreDeTir()
      */
    void ordreDeTir();

    /*!
      methode qui permet de tirer une fois pour chaque bateau (un tour de combat = une bordee)
      \fn tirerUneBordeePourChaqueBateau(Partie *partie)
      \param partie donnees necessaires pour les decisions de l'IA
      */
    void tirerUneBordeePourChaqueBateau(Partie *partie);

    /*!
      methode qui permet de detecter si les bateaux vises sont toujours en vie ou non
      \fn bateauxEnVie()
      \return enVie booleen qui represente le statut (en vie ou mort) du bateau
      */
    bool bateauxEnVie();

    /*!
      getter de l'attribut liste des combattants
      \fn bateauxEnVie()
      */
    QVector<Bateau*> getCombattants();

private :

        QVector<Bateau*> combattants;

};

#endif // COMBATS_H
