/*!
  \file pirateMapCarteTresor.cpp
  \brief code de la classe PirateMapCarte Tresor

  Implementation des methodes de PirateMapCarteTresor
  */

#include "piratemapcartetresor.h"

PirateMapCarteTresor::PirateMapCarteTresor( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent )
        : QGraphicsSvgItem( fileName, parent ),
          m_position_x( position_x ),
          m_position_y( position_y )
{
    setCacheMode(DeviceCoordinateCache);
    setZValue(2);
}

qreal PirateMapCarteTresor::getX()
{
    return m_position_x;
}

qreal PirateMapCarteTresor::getY()
{
    return m_position_y;
}
