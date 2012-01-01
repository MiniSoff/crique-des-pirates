/*!
  \file piratemapbackground.h
  \brief header de la classe PirateMapBackground

  Cette classe represente l'objet graphique background
  */

#ifndef PIRATEMAPBACKGROUND_H
#define PIRATEMAPBACKGROUND_H

#include <QGraphicsSvgItem>
#include <stdlib.h>

/*
Cette classe va simplement charger le fond de la carte contenue par la graphicView.
Cette carte va contenir tous les �l�ments qui sont du d�cor.
Un �l�ment de d�cor est un �l�ment qui ne r�agit pas aux int�ractions de l'utilisateur.
Cette classe contient tr�s peu de code puisqu'elle h�rite de QGraphicsSvgItem.
  */
/*!
  \class PirateMapBackground
  */
class PirateMapBackground : public QGraphicsSvgItem
{

public:

     /*!
      \fn PirateMapBackground( const QString & fileName, QGraphicsItem * parent = 0 )
      \param fileName le chemin vers le fichier image
      \param *parent widget parent de l'ui
      */
    PirateMapBackground( const QString & fileName, QGraphicsItem * parent = 0 );

};

#endif // PIRATEMAPBACKGROUND_H
