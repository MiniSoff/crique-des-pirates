/*!
  \file factory.cpp
  \brief code de la classe Factory

  Ce fichier contient les implementations des methode de factory.h
  */

#include <QPoint>

#include "factory.h"

Factory::Factory()
{
}

QVector<CarteTresor*> Factory::genererLesCartesTresors(PirateMapBackground *background)
{
    QVector<CarteTresor*> cartesTresors;
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(0,2,5,1,":/resources/images/carts/tresor/tresor_0_2_5_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,3,6,0,":/resources/images/carts/tresor/tresor_0_3_6_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,5,5,0,":/resources/images/carts/tresor/tresor_0_5_5_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,6,4,0,":/resources/images/carts/tresor/tresor_0_6_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,7,4,0,":/resources/images/carts/tresor/tresor_0_7_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,8,3,0,":/resources/images/carts/tresor/tresor_0_8_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(0,9,2,0,":/resources/images/carts/tresor/tresor_0_9_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,9,3,0,":/resources/images/carts/tresor/tresor_0_9_3_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,1,4,1,":/resources/images/carts/tresor/tresor_1_1_4_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,2,5,0,":/resources/images/carts/tresor/tresor_1_2_5_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,4,4,0,":/resources/images/carts/tresor/tresor_1_4_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,5,3,0,":/resources/images/carts/tresor/tresor_1_5_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(1,6,3,0,":/resources/images/carts/tresor/tresor_1_6_3_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,7,2,0,":/resources/images/carts/tresor/tresor_1_7_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,8,2,0,":/resources/images/carts/tresor/tresor_1_8_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,9,1,0,":/resources/images/carts/tresor/tresor_1_9_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,2,2,0,":/resources/images/carts/tresor/tresor_2_2_2_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,2,3,0,":/resources/images/carts/tresor/tresor_2_2_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(2,4,2,0,":/resources/images/carts/tresor/tresor_2_4_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,5,2,0,":/resources/images/carts/tresor/tresor_2_5_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,6,1,0,":/resources/images/carts/tresor/tresor_2_6_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,7,1,0,":/resources/images/carts/tresor/tresor_2_7_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,8,0,0,":/resources/images/carts/tresor/tresor_2_8_0_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,9,0,0,":/resources/images/carts/tresor/tresor_2_9_0_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(3,1,1,1,":/resources/images/carts/tresor/tresor_3_1_1_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,2,2,2,":/resources/images/carts/tresor/tresor_3_2_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,3,1,0,":/resources/images/carts/tresor/tresor_3_3_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,5,0,0,":/resources/images/carts/tresor/tresor_3_5_0_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(4,0,0,1,":/resources/images/carts/tresor/tresor_4_0_0_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(4,2,0,0,":/resources/images/carts/tresor/tresor_4_2_0_0.svg", background));

        //idem pour eviter de reutiliser les memes pointeurs
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(0,2,5,1,":/resources/images/carts/tresor/tresor_0_2_5_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,3,6,0,":/resources/images/carts/tresor/tresor_0_3_6_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,5,5,0,":/resources/images/carts/tresor/tresor_0_5_5_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,6,4,0,":/resources/images/carts/tresor/tresor_0_6_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,7,4,0,":/resources/images/carts/tresor/tresor_0_7_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,8,3,0,":/resources/images/carts/tresor/tresor_0_8_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(0,9,2,0,":/resources/images/carts/tresor/tresor_0_9_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(0,9,3,0,":/resources/images/carts/tresor/tresor_0_9_3_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,1,4,1,":/resources/images/carts/tresor/tresor_1_1_4_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,2,5,0,":/resources/images/carts/tresor/tresor_1_2_5_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,4,4,0,":/resources/images/carts/tresor/tresor_1_4_4_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,5,3,0,":/resources/images/carts/tresor/tresor_1_5_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(1,6,3,0,":/resources/images/carts/tresor/tresor_1_6_3_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,7,2,0,":/resources/images/carts/tresor/tresor_1_7_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,8,2,0,":/resources/images/carts/tresor/tresor_1_8_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(1,9,1,0,":/resources/images/carts/tresor/tresor_1_9_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,2,2,0,":/resources/images/carts/tresor/tresor_2_2_2_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,2,3,0,":/resources/images/carts/tresor/tresor_2_2_3_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(2,4,2,0,":/resources/images/carts/tresor/tresor_2_4_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,5,2,0,":/resources/images/carts/tresor/tresor_2_5_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,6,1,0,":/resources/images/carts/tresor/tresor_2_6_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,7,1,0,":/resources/images/carts/tresor/tresor_2_7_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,8,0,0,":/resources/images/carts/tresor/tresor_2_8_0_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(2,9,0,0,":/resources/images/carts/tresor/tresor_2_9_0_0.svg", background));
        //6 cartes
        cartesTresors.append(new CarteTresor::CarteTresor(3,1,1,1,":/resources/images/carts/tresor/tresor_3_1_1_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,2,2,2,":/resources/images/carts/tresor/tresor_3_2_2_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,3,1,0,":/resources/images/carts/tresor/tresor_3_3_1_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(3,5,0,0,":/resources/images/carts/tresor/tresor_3_5_0_0.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(4,0,0,1,":/resources/images/carts/tresor/tresor_4_0_0_1.svg", background));
        cartesTresors.append(new CarteTresor::CarteTresor(4,2,0,0,":/resources/images/carts/tresor/tresor_4_2_0_0.svg", background));

        /*
        for(int i =0;i<cartesTresors.size();i++)
        {
            cartesTresors[i]->getImage()->hide();
        }
        */
    QVector<CarteTresor*> cartesTresors2;
    int num;
    Des des;
    while(!cartesTresors.isEmpty())
    {
        num = des.numCarteTresors(cartesTresors.size());
        cartesTresors2.append(cartesTresors[num]);
        cartesTresors.remove(num);
    }
    return cartesTresors2;
}

QVector<Ile*> Factory::genererLesIles(PirateMapBackground *background)
{
    QVector<CarteTresor*> cartesTresors = genererLesCartesTresors(background);

    QVector<Ile*> listesIles;
    //QPolygon polygon(1);
    //  polygon[0] = QPoint(4, 5);
    //polygon.putPoints(1, 2, 6,7, 8,9);

    QPolygon polygonTaverne;
    polygonTaverne<<QPoint(1200,1700)<< QPoint::QPoint(1200,1630) << QPoint::QPoint(1130,1630) << QPoint::QPoint(1060,1630);
    //polygonTaverne.putPoints(0, 1, 2, 3, 1200,1700, 1200,1630, 1130,1630, 1060,1630);
    listesIles.append(new Ile(piocher12CartesTresors(cartesTresors, 0),Ile::Taverne, ":/resources/images/map/pirateMapIsland1_taverne.svg", background, polygonTaverne));

    QPolygon polygonCoque;
    polygonCoque << QPoint(600,1000) << QPoint(600,1070) << QPoint(600,1240) << QPoint(600,1210);
    listesIles.append(new Ile(piocher12CartesTresors(cartesTresors, 1),Ile::Coque,":/resources/images/map/pirateMapIsland2_coque.svg",background, polygonCoque));

    QPolygon polygonVoile;
    polygonVoile << QPoint(700,100) << QPoint(700,170) << QPoint(700,240) << QPoint(700,310);
    listesIles.append(new Ile(piocher12CartesTresors(cartesTresors, 2),Ile::Voile,":/resources/images/map/pirateMapIsland3_voile.svg",background, polygonVoile));

    QPolygon polygonCanon;
    polygonCanon << QPoint(1450,500) << QPoint(1450,430) << QPoint(1530,570) << QPoint(1590,640);
    listesIles.append(new Ile(piocher12CartesTresors(cartesTresors, 3),Ile::Canon,":/resources/images/map/pirateMapIsland4_canons.svg",background, polygonCanon));

    QPolygon polygonEquipage;
    polygonEquipage << QPoint(1400,1550) << QPoint(1470,1620) << QPoint(1540,1690) << QPoint(1610,1760);
    listesIles.append(new Ile(piocher12CartesTresors(cartesTresors, 4),Ile::Equipage,":/resources/images/map/pirateMapIsland5_equipage.svg", background, polygonEquipage));

    QPolygon polygonTresors;
    polygonTresors << QPoint(800,1000) << QPoint(800,930) << QPoint(800,1070) << QPoint(800,1140);
    listesIles.append(new Ile(Ile::Tresors,":/resources/images/map/pirateMapIsland6_tresor.svg", background, polygonTresors));

    QPolygon polygonCrique;
    polygonCrique << QPoint(1600,1200) << QPoint(1650,1250) << QPoint(1650,1150) << QPoint(2,4);
    listesIles.append(new Ile(Ile::Crique,":/resources/images/map/pirateMapIsland7_crique.svg", background, polygonCrique));

    return listesIles;
}


QVector<Bateau*> Factory::genererLesBateaux(PirateMapBackground *background, Des *des)
{
    QVector<Bateau*> joueurs;

    joueurs.append(new BateauPJ("Joueur",0,":/resources/images/boats/pirateMapBoat_joueur.svg", background,des));
    joueurs.append(new BateauPNJ("Capitaine Red",1,":/resources/images/boats/pirateMapBoat_adversaire1.svg", background,des));
    joueurs.append(new BateauPNJ2("Capitaine Violet",2,":/resources/images/boats/pirateMapBoat_adversaire2.svg", background,des));
    joueurs.append(new BateauPL("Jack Sparrow",3,":/resources/images/boats/pirateMapBoat_legende.svg", background,des));
    joueurs.append(new BateauPL("Jacqueline Sparrow",3,":/resources/images/boats/pirateMapBoat_legende.svg", background,des));
    //joueurs.append(new Bateau(":/resources/images/boats/pirateMapBoat_royalNavy.svg", background));

    /**
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland1_taverne.svg", 700, 1600, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland2_coque.svg", 50, 900, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland3_voile.svg", 45, 25, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland4_canons.svg", 1460, 70, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland5_equipage.svg", 1400, 1550, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland6_tresor.svg", 800, 700, m_PirateMapBackground ) );
    m_PirateMapIslands.append( new PirateMapIsland( ":/resources/images/map/pirateMapIsland7_crique.svg", 1150, 1050, m_PirateMapBackground ) );
    */

    return joueurs;
}


 QVector<CarteTresor*> Factory::piocher12CartesTresors(QVector<CarteTresor*> cartesTresors, int numIle)
 {
     QVector<CarteTresor*> temp;
     //QVectorIterator<int> iterateur(cartesTresors);
    int iterateur;


     switch(numIle)
     {
         case 0:
            iterateur=0;
            while(iterateur<12){
                temp.append(cartesTresors.at(iterateur));
                iterateur++;
            }
         break;

         case 1:
            iterateur=12;
            while(iterateur<24){
                temp.append(cartesTresors.at(iterateur));
                iterateur++;
            }
         break;

         case 2:
            iterateur=24;
            while(iterateur<36){
                temp.append(cartesTresors.at(iterateur));
                iterateur++;
            }
         break;

         case 3:
            iterateur=36;
            while(iterateur<48){
                temp.append(cartesTresors.at(iterateur));
                iterateur++;
            }
         break;

         case 4:
            iterateur=48;
            while(iterateur<60){
                temp.append(cartesTresors.at(iterateur));
                iterateur++;
            }
         break;
     }

    return temp;
 }

