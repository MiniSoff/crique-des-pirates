/*!
  \file mainpiratemap.h
  \brief header de la classe MainPirateMap

  Cette classe represente le widget MainPirateMap
  */

#ifndef MAIN_PIRATE_MAP_H
#define MAIN_PIRATE_MAP_H

#include <QtGui/QGraphicsView>

QT_BEGIN_NAMESPACE
//class QWheelEvent;
//class QPaintEvent;
class QFile;
QT_END_NAMESPACE

/*!
  class MainPirateMap
  */
class MainPirateMap : public QGraphicsView
{
    Q_OBJECT

//public slots:
//    void setRenderer(QAction *action);

public:

    /*!
      contructeur
      \fn MainPirateMap( QWidget *parent = 0 )
      \param *parent le widget parent
      */
    MainPirateMap( QWidget *parent = 0 );

    // void drawMap(const QFile &file);
    // void itemMoved();

protected:

    // void keyPressEvent(QKeyEvent *event);
    // void timerEvent(QTimerEvent *event);
    void wheelEvent(QWheelEvent *event);
    void drawBackground(QPainter *painter, const QRectF &rect);
    void paintEvent(QPaintEvent *event);

    void scaleView(qreal scaleFactor);

};


#endif // MAIN_PIRATE_MAP_H
