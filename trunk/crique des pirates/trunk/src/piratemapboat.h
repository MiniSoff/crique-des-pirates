/*!
  \file pirateMapBoat.h
  \brief header de la classe PirateMapBoat

  Cette classe represente l'objet graphique bateau
  */

#ifndef PIRATEMAPBOAT_H
#define PIRATEMAPBOAT_H

#include <QGraphicsItem>
#include <QGraphicsSvgItem>
#include <QPoint>

/*!
  \class PirateMapBoat
  */
class PirateMapBoat : public QGraphicsSvgItem
{
    Q_OBJECT

public:
     /*!
      \fn PirateMapBoat( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 )
      \param fileName le chemin vers le fichier image
      \param position_x position en x sur l'ui
      \param position_y position en y sur l'ui
      \param *parent widget parent de l'ui
      */
    PirateMapBoat( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 );
    //goToPosition (qreal position_x, qreal position_y, QGraphicsItem * parent = 0 );

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

    /*!
      setter de la position en x sur l'ui
      \fn setY(qreal);
      \param qreal la position en x sur l'ui
      */
    void setX(qreal);

    /*!
      setter de la position en y sur l'ui
      \fn gsetY(qreal);
      \param qreal la position en x sur l'ui
      */
    void setY(qreal);

public slots:

    /*!
      signal qui permet d'envoyer le bateau au couple de coordonnees voulu
      \fn       goToPosition(int, QPoint)
      \param    int la position du bateau
      \param    QPoint  les coordonnees voulues
      */
    void goToPosition(int, QPoint);

private:

    qreal m_position_x;
    qreal m_position_y;

};

#endif // PIRATEMAPBOAT_H
