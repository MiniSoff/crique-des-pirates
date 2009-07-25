/*!
  \file des.h
  \brief header de la classe Des

  Cette classe represente les des de combats
  */

#ifndef DES_H
#define DES_H

/*!
  \class Des
  */
class Des
{

public:

    /*!
      constructeur
      \fn Des()
      */
    Des();

    /*!
      methode qui renvoie le resultat d'un jet de de 6 faces
      \fn jetDe()
      \return int le resultat du jet de de
      */
    int jetDe();

    bool gagne(int score);// renvoi true si le jetDe obtenu est supérieur ou égale à score
    int gagne(int score, int nbJets); //renvoi le nb de jet de dé réussi

    /*!
      methode qui renvoie les points de renommee lorsqu'un prend des cartes taverne
      \fn renommeeTaverne()
      \return int le nombre de points de renommee gagnes
      */
    int renommeeTaverne();
    int numCarteTresors(int max);
};

#endif // DES_H
