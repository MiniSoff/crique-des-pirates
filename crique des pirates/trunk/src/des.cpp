/*!
  \file des.cpp
  \brief code de la classe Des

  Implementation des methodes de Des
  */

#include "des.h"
#include <iostream>
#include <ctime>
#include <Qt>


Des::Des()
{
    //TODO problème d'initiatilisation du random.
srand (time(0)); //initialisation du random
}

int Des::jetDe()
{
  return rand() % 6 + 1;
}

bool Des::gagne(int score)
{
    if (jetDe()>=score)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Des::gagne(int score, int nbJets)
{
    int nbGagne = 0;
    for(int i = 0;i<nbJets;i++)
    {
        if(jetDe()>=score)
        {
            nbGagne++;
        }
    }
    return nbGagne;
}

int Des::renommeeTaverne()
{
    int randValue=rand() % 10;
    if(randValue<1)
    {
        return 0;
    }
    else if (randValue <5)
    {
        return 1;
    }
    else if (randValue <10)
    {
        return 2;
    }
    else
    {
        return 3;
    }


}

int Des::numCarteTresors(int max)
{
    return rand() % max;
}

