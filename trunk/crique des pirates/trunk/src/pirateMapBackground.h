/*!
  \file piratemapbackground.h
  \brief header de la classe PirateMapBackground

  Cette classe represente l'objet graphique background
  */

#ifndef PIRATEMAPBACKGROUND_H
#define PIRATEMAPBACKGROUND_H

#include <QGraphicsSvgItem>

/*
Cette classe va simplement charger le fond de la carte contenue par la graphicView.
Cette carte va contenir tous les éléments qui sont du décor.
Un élément de décor est un élément qui ne réagit pas aux intéractions de l'utilisateur.
Cette classe contient très peu de code puisqu'elle hérite de QGraphicsSvgItem.
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
