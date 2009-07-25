/*!
  \file cartetresor.h
  \brief header de la classe CarteTresor

  Cette classe represente l'objet carte tresor
  */

#ifndef CARTE_TRESOR_H
#define CARTE_TRESOR_H
#include "piratemapcartetresor.h"
#include "piratemapbackground.h"

/*!
  \class CarteTresor
  */
class CarteTresor
{

    public:

        /*!
          constructeur de carte tresor par defaut
          */
        CarteTresor();

        /*!
          constructeur de carte tresor
          \fn CarteTresor(int renomee, int doublons, int tresors, int taverne, QString cheminImage, PirateMapBackground *background)
          \param renomme l'entier qui donne le nombre de renomme de la carte
          \param doublons l'entier qui donne le nombre de doublons de la carte
          \param tresors l'entier qui donne le nombre de tresors de la carte
          \param taverne l'entier qui donne le nombre de cartes taverne (ici renommee)
          \param cheminImage le chemin vers l'image de la carte tresor
          \param *parent le widget parent de la carte
          */
        CarteTresor::CarteTresor(int renomee, int doublons, int tresors, int taverne, QString cheminImage, PirateMapBackground *background);

        /*!
          destructeur de la carte tresor
          \fn ~CarteTresor()
          */
        ~CarteTresor();

        /*!
          getter de l'attribut renommee de la carte tresor
          \fn getRenomee()
          \return int la valeur de la renommee
          */
        int getRenomee();

        /*!
          getter de l'attribut doublons de la carte tresor
          \fn getDoublons()
          \return int la valeur des doublons
          */

        int getDoublons();

        /*!
          getter de l'attribut tresors de la carte tresor
          \fn getTresors()
          \return int la valeur des tresors
          */

        int getTresors();

        /*!
          getter de l'attribut taverne de la carte tresor
          \fn getTaverne()
          \return int la valeur des cartes taverne
          */
        int getTaverne();

        /*!
          getter de la carte tresor graphique
          \fn getImage()
          \return PirateMapCarteTresor l'adresse de la carte tresor graphique
          */
        PirateMapCarteTresor *getImage();

    private:

        int renomee;
        int doublons;
        int tresors;
        int taverne;
        PirateMapCarteTresor *image;
};

#endif // CARTE_TRESOR_H

/*#ifndef CARTE_TRESOR_H
#define CARTE_TRESOR_H

#include <QGraphicsItem>
#include <QList>

// class Edge;

class MainPirateMap;


QT_BEGIN_NAMESPACE

    class QGraphicsSceneMouseEvent;

QT_END_NAMESPACE


class CarteTresor : public QGraphicsItem
{
public:
    CarteTresor(MainPirateMap *mainPirateMap);
    CarteTresor(MainPirateMap *mainPirateMap, int renommee, int doublons, int coffres, int taverne);
    CarteTresor();


    // enum { Type = UserType + 1 };
    // int type() const { return Type; }

    // bool advance();

    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    // QVariant itemChange(GraphicsItemChange change, const QVariant &value);

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
    // QList<Edge *> edgeList;
    // QPointF newPos;
    // MainPirateMap *graph;
    MainPirateMap *_mainPirateMap;
    int renommee;
    int doublons;
    int coffre;
    int carteTaverne;
};



#endif // CARTE_TRESOR_H
*/
