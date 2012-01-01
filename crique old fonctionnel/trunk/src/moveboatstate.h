#ifndef MOVEBOATSTATE_H
#define MOVEBOATSTATE_H

#include "qtstate.h"
#include <stdlib.h>

class PirateMapBoat;


class moveBoatState1 : public QtState
{
public:
    moveBoatState1( PirateMapBoat *boat, QtState *parent = 0 );
protected:
    void onEntry();
private :
    PirateMapBoat *m_boat;
};

class moveBoatState2 : public QtState
{
public:
    moveBoatState2( PirateMapBoat *boat, QtState *parent = 0 );
protected:
    void onEntry();
private :
    PirateMapBoat *m_boat;
};

class moveBoatState3 : public QtState
{
public:
    moveBoatState3( PirateMapBoat *boat, QtState *parent = 0 );
protected:
    void onEntry();
private :
    PirateMapBoat *m_boat;
};

class allerATaverne : public QtState
{
public:
    allerATaverne( PirateMapBoat *boat, QtState *parent = 0 );
protected:
    void onEntry();
private :
    PirateMapBoat *m_boat;
};

class allerACoque : public QtState
{
public:
    allerACoque( PirateMapBoat *boat, QtState *parent = 0 );
protected:
    void onEntry();
private :
    PirateMapBoat *m_boat;
};

#endif // MOVEBOATSTATE_H
