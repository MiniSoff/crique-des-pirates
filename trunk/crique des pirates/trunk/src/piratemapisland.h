/*!
  \file pirateMapIsland.h
  \brief header de la classe PirateMapIsland

  Cette classe represente l'objet graphique ile
  */

#ifndef PIRATEMAPISLAND_H
#define PIRATEMAPISLAND_H

#include <QGraphicsItem>
#include <QGraphicsSvgItem>


/*
  Le comportement des îles est le suivant : je clique une fois dessus, je la sélectionne.
  Je clique à nouveau dessus, je la déselectionne.
  Une seule île peut-être sélectionnée à la fois (utilisation des slots et signaux).
  */

/*!
  \class PirateMapIsland
  */
class PirateMapIsland : public QGraphicsSvgItem
{

    Q_OBJECT

public:
    /*!
      constructeur
      \fn PirateMapIsland( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 )
      \param fileName le chemin vers le fichier image
      \param position_x position en x sur l'ui
      \param position_y position en y sur l'ui
      \param *parent widget parent de l'ui
      */
    PirateMapIsland( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent = 0 );

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

/*public slots:
    void setIslandSelected( bool selected );

signals:
    void islandSelected( bool selected );

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    // Je veux que quand on clique sur une des iles, celle-ci soit sélectionnée.
    // Je veux aussi que toutes les autres îles soient déselectionnées.
*/

private:

    // QGraphicsSvgItem *m_PirateMapIsland1_unselected;
    // QGraphicsSvgItem *m_PirateMapIsland1_selected;
    // bool m_selected;
    qreal m_position_x;
    qreal m_position_y;

};

#endif // PIRATEMAPISLAND_H
