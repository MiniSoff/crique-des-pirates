/*!
  \file pirateMapBoat.cpp
  \brief code de la classe PirateMapBoat

  Implementation des methodes de PirateMapBoat
  */

#include "piratemapboat.h"

PirateMapBoat::PirateMapBoat(const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent )
    : QGraphicsSvgItem( fileName, parent),
      m_position_x( position_x ),
      m_position_y( position_y )
{
    setCacheMode(DeviceCoordinateCache);
    setZValue(1);
}

qreal PirateMapBoat::getX()
{
    return m_position_x;
}

qreal PirateMapBoat::getY()
{
    return m_position_y;
}

void PirateMapBoat::setX(qreal x)
{
    m_position_x = x;
}

void PirateMapBoat::setY(qreal y)
{
    m_position_y = y;
}

void PirateMapBoat::goToPosition(int position, QPoint coords)
        /*TODO auqnd on aura mis au point de passer la partie en param, on aura les iles en param de cete methode pour recup les coords)*/
{
    this->setPos(coords.x(),coords.y());

}
