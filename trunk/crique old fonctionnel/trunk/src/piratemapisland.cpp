/*!
  \file pirateMapIsland.cpp
  \brief code de la classe PirateMapIsland

  Implementation des methodes de PirateMapIsland
  */

#include "piratemapisland.h"

PirateMapIsland::PirateMapIsland( const QString & fileName, qreal position_x, qreal position_y, QGraphicsItem * parent )
    : QGraphicsSvgItem( fileName, parent ),
      //m_selected( false ),
      m_position_x( position_x ),
      m_position_y( position_y )
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
    // setFlag(QGraphicsItem::ItemIsSelectable);
    setCacheMode(DeviceCoordinateCache);
    setZValue(1);

}


qreal PirateMapIsland::getX()
{
    return m_position_x;
}

qreal PirateMapIsland::getY()
{
    return m_position_y;
}

