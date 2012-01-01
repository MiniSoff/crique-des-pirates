/*!
  \file pirateMapCarteTresor.h
  \brief header de la classe PirateMapCarteTresor

  Cette classe represente l'objet graphique carte tresor
  */

#ifndef PIRATEMAPCARTETRESOR_H
#define PIRATEMAPCARTETRESOR_H

#include <QGraphicsItem>
#include <QGraphicsSvgItem>

#include <stdlib.h>

/*!
  \class PirateMapCarteTresor
  */
class PirateMapCarteTresor : public QGraphicsSvgItem
{
    Q_OBJECT

public:

    /*!
      \fn PirateMapCarteTresor( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 )
      \param fileName le chemin vers le fichier image
      \param position_x position en x sur l'ui
      \param position_y position en y sur l'ui
      \param *parent widget parent de l'ui
      */
    PirateMapCarteTresor( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 );

    /*!
      getter de la position en x sur l'ui
      \fn getX();
      \return qreal la position en x sur l'ui
      */
    qreal getX();

     /*!
      getter de la position en y sur l'ui
      \fn getY();
      \return qreal la position en y sur l'ui
      */
    qreal getY();

private:
    qreal m_position_x;
    qreal m_position_y;

};

#endif // PIRATEMAPCARTETRESOR_H
