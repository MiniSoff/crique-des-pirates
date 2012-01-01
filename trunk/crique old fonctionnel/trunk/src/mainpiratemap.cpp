/*!
  \file mainpiratemap.cpp
  \brief code de la classe MainPirateMap

  Implementation des methodes de MainPirateMap
  */

#include "mainpiratemap.h"

// #include <QDebug>

// Tous les includes sont a déplacer ou à entourer de #ifndef...
#include <QMessageBox>
#include <QString>

#include <QFile>
#include <QGraphicsScene>
#include <QGraphicsSvgItem>
#include <QWheelEvent>

#include <math.h>


MainPirateMap::MainPirateMap(QWidget *parent)
    : QGraphicsView(parent)
{

    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    setResizeAnchor(AnchorViewCenter);





}

void MainPirateMap::wheelEvent(QWheelEvent *event)
{
    scaleView(pow((double)2, -event->delta() / 240.0));
}


/* Fonction pour le zoom et dézoom avec molette de souris.
  */
void MainPirateMap::scaleView(qreal scaleFactor)
{
    qreal factor = matrix().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < 0.07 || factor > 100)
        return;

    scale(scaleFactor, scaleFactor);
}


void MainPirateMap::paintEvent(QPaintEvent *event)
{
    QGraphicsView::paintEvent(event);
}

void MainPirateMap::drawBackground(QPainter *painter, const QRectF &rect)
{
    Q_UNUSED(rect);

}


