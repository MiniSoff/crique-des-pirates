/*!
  \file sortbateaubyvoile.h
  \brief header de la classe SortBateauByVoile

  Cette classe intervient lors des combats
  */

#ifndef SORTBATEAUBYVOILE_H
#define SORTBATEAUBYVOILE_H
#include "bateau.h"
#include <stdlib.h>

/*!
  \class sortBateauByVoile
  */
class sortBateauByVoile
{

public:
    /*!
      constructeur
      \fn sortBateauByVoile();
      */
    sortBateauByVoile();

    /*!
      methode intervient pour departager deux bateaux suivant leurs voiles
      */
    bool operator()(Bateau *b1,  Bateau *b2)
    {
        return b1->getVoile()>b2->getVoile();
    }

};

#endif // SORTBATEAUBYVOILE_H
