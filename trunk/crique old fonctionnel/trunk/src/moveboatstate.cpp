#include "moveboatstate.h"
// State machines
#include "qtstatemachine.h"
#include "qtstate.h"
#include "qtabstractstate.h"
#include "piratemapboat.h"


moveBoatState1::moveBoatState1( PirateMapBoat *boat, QtState *parent)
    : QtState(parent), m_boat(boat)
{
}
void moveBoatState1::onEntry()
{
 m_boat->setPos( 150, 150);
}

moveBoatState2::moveBoatState2( PirateMapBoat *boat, QtState *parent)
    : QtState(parent), m_boat(boat)
{
}
void moveBoatState2::onEntry()
{
    m_boat->setPos( 800, 500);
}

moveBoatState3::moveBoatState3( PirateMapBoat *boat, QtState *parent)
    : QtState(parent), m_boat(boat)
{
}
void moveBoatState3::onEntry()
{
m_boat->setPos( 200, 1600);
}


allerATaverne::allerATaverne( PirateMapBoat *boat, QtState *parent)
    : QtState(parent), m_boat(boat)
{
}
void allerATaverne::onEntry()
{
    //Position correcte
    m_boat->setPos( 1200, 1700);
}


allerACoque::allerACoque( PirateMapBoat *boat, QtState *parent)
    : QtState(parent), m_boat(boat)
{
}
void allerACoque::onEntry()
{
    m_boat->setPos( 400, 1800);
}
