/*!
  \file Bateau.h
  \brief header de la classe Bateau

  \author Pirates' crew

  Un bateau represente un joueur de notre jeu
  Chaque joueur �tend de ce bateau
  Contient toutes les methodes qui modifient l'etat du bateau

  */


#ifndef BATEAU_H
#define BATEAU_H

#include <QString>
#include <QObject>
#include <stdlib.h>
#include "piratemapboat.h"
#include "piratemapbackground.h"
#include "cartetresor.h"
#include "des.h"
#include "partie.h"
#include <QString>

#include <algorithm>
using namespace std;

class Combats;

/*!
  \class Bateau
  */
class Bateau : public QObject
{

    /*!
      \macro permet d'utiliser les signaux
      */
    Q_OBJECT

public:

    /*!
      \enum les differentes sections d'un bateau
      */
    enum Section
   {
      Voile,
      Coque,
      Equipage,
      Canon
   };

    /*!
      constructeur par defaut de Bateau
      \fn Bateau()
      */
    Bateau();

    /*!
      constructeur ameliore de Bateau
      \fn Bateau(int typeBateau,QString cheminImage,PirateMapBackground *background)
      \param typeBateau  le joueur que l'on cree
      \param cheminImage le chemin vers l'image representant le bateau
      \param *background le widget qui contient l'image du bateau
      */
    Bateau(QString nom, int typeBateau,QString cheminImage,PirateMapBackground *background, Des *des);

    /*!
      destructeur de Bateau
      \fn ~Bateau()
      */
    virtual ~Bateau();

    /*!
      methode qui applique a la section choisie par un adversaire les degats sur celle-ci a la fin d'une bordee
      \fn recevoirDgts(int nbDgts, Section section)
      \param nbDgts  la valeur des degats
      \param section la section attaquee choisie
      */
    void recevoirDgts(int nbDgts, Section section);

    /*!
      mathode qui indique au bateau adverse cible quelle section le bateau attaque lors d'une bordee
      \fn attaquer(Bateau &cible, Section section)
      \param &cible  l'adresse du bateau attaque choisi
      \param section la section attaquee choisie
      */
    void attaquer(Bateau *cible, Section section);

    /*!
      methode qui permet au bateau d'ameliorer une section
      \fn ameliorerSection(int nbAmeliorations, Section section)
      \param nbAmeliorations la valeur dont on ameliore la section
      \param section la section amelioree choisir
      \param Des random
      */
    void ameliorerSection(int nbAmeliorations, Section section);

    /*!
      methode qui renvoie le nombre de tirs possibles lors d'une bordee
      \fn nbTirPossible()
      \return int le nombre de tirs possibles
      */
    int nbTirPossible();

    /*!
      methode qui permet au bateau de prendre pour lui les attributs de la carte tresor de l'ile ou il se trouve
      \fn recupererCarteTresors(CarteTresor *carte, Des des)
      \param *carte  l'adresse de la carte tresor
      \param des le nombre de points de renommee que le bateau recupere
      */
    void recupererCarteTresors(CarteTresor *carte, Des des);

    /*!
      methode qui permet au bateau de se reparer lorsqu'il est a la crique
      \fn reparer()
      */
    virtual void reparer();

    /*!
      methode qui verifie si le bateau peut contenir tous les tresors
      \fn verifierCoffre()
      */
    void verifierCoffre();

    /*!
      methode qui renvoie le nombre de tresors qu'un bateau peut stocker dans sa coque
      \fn valeurCoqueCoffre()
      \return int le nombre de tresors stockable
      */
    int valeurCoqueCoffre();

    /*!
      methode qui renvoie la valeur de la voile d'un bateau
      \fn valeurVoilure()
      \return int la valeur de voile
      */
    int valeurVoilure();

    /*!
      methode qui permet au bateau d'enterrer ses tresors sur l'ile aux tresors
      \fn deposerTresors()
      */
    void deposerTresors();

    /*!
      methode qui permet au bateau d'enterrer ses doublons sur l'ile aux tresors
      \fn deposerDoublons(int nbDoublons)
      \param nbDoublons le nombre de doublons a enterrer
      */
    void deposerDoublons(int nbDoublons);

    /*!
      methode qui dit si le bateau est en vie
      \fn enVie()
      \return true/false si le bateau est en vie
      */
    bool enVie();//

    /*!
      methode qui permet au bateau de naviguer vers l'ile de son choix
      \fn goToPosition(int position, Partie *partie)
      \param position numero de l'ile choisie
      \param *partie l'adresse de la partie pour conserver l'etat
      */
    void goToPosition(int, Partie*);

    /*!
      methode virtuelle du bateau qui appelle la phase navigation
      \fn naviguer(Partie *partie)
      \param *partie l'adresse de la partie pour conserver l'etat
      */
    virtual void naviguer(Partie *);

    /*!
      methode virtuelle du bateau qui appelle la phase navigation
      \fn naviguer(int position, Partie *partie)
      \param *partie l'adresse de la partie pour conserver l'etat
      \param position le numero de l'ile choisie
      */
    virtual void naviguer(int, Partie *);

    /*!
      methode virtuelle qui appelle la phase des effets des iles
      \fn effetDesIles()
      */
    virtual void effetDesIles();

    /*!
      getter de l'attribut voile du bateau
      \fn getVoile()
      \return int la valeur de la section voile du bateau
      */
    int getVoile();

    /*!
      getter de l'attribut coque du bateau
      \fn getCoque()
      \return int la valeur de la section coque du bateau
      */
    int getCoque();

    /*!
      getter de l'attribut canonc du bateau
      \fn getCanons()
      \return int la valeur de la section canons du bateau
      */
    int getCanons();

    /*!
      getter de l'attribut equipage du bateau
      \fn getEquipage()
      \return int la valeur de la section equipage du bateau
      */
    int getEquipage();

    /*!
      getter de la position (ile) du bateau
      \fn getIle()
      \return int la valeur de l'ile sur laquelle le bateau se trouve
      */
    int getPosition();

    /*!
      getter de l'attribut renommee du bateau
      \fn getRenommee()
      \return int la valeur de la renommee du bateau
      */
    int getRenommee();

    /*!
      getter de l'attribut doublons du bateau
      \fn getDoublons()
      \return int la valeur des doublons du bateau
      */
    int getDoublons();

    /*!
      getter de l'attribut tresors du bateau
      \fn getTresors()
      \return int la valeur des tresors du bateau
      */
    int getTresors();

    /*!
      getter de l'attribut nom du bateau
      \fn getNom()
      \return int le nom du bateau
      */
    QString getNom();

    /*!
      methode qui emet les signaux de changements des valeurs des attributs du bateau pour mettre a jour l'ui
      \fn initialiserLabel()
      */
    void initialiserLabel();

    /*!
      methode qui desactive les sliders de l'ui pour le joueur suivant l'ile ou il se trouve
      \fn desactiverSliders()
      */
    void desactiverSliders();

    /*!
      methode qui indique a l'utilisateur qu'une amelioration est impossible
      \fn emettreAmeliorationImpossible()
      */
    void emettreAmeliorationImpossible();

    /*!
      methode qui emet le signal de changement de la valeur de la section canon
      \fn emettreChgCanon()
      */
    void emettreChgCanon();

    /*!
       methode qui emet le signal de changement de la valeur de la section equipage
      \fn emettreChgEquipage()
      */
    void emettreChgEquipage();

    /*!
       methode qui emet le signal de changement de la valeur de la section voile
      \fn emettreChgVoile()
      */
    void emettreChgVoile();

    /*!
       methode qui emet le signal de changement de la valeur de la section canon
      \fn emettreChgCoque()
      */
    void emettreChgCoque();

    /*!
      methode virtuelle qui permet au bateau de tirer lors des combats
      \fn tirerBordee(Combat *combat)
      \param *combat
      \return int
      */
    virtual int tirerBordee(Combats*combat);

    /*!
      methode qui renvoie le type de bateau (joueur, adversaire1, adversaire2, pirate de legende)
      \fn getTypeBateau()
      \return int la valeur du type de bateau
      */
    int getTypeBateau();

    /*!
      methode qui reduit une section du bateau
      \fn reduireSection(int,Section)
      \param valeur nombre d'amelioration
      \param section section a ameliorer
      */
    void reduireSection(int,Section);

    /*!
      methode qui augmente une section du bateau
      \fn augmenterSection(int,Section)
      \param valeur nombre d'amelioration
      \param section section a ameliorer
      */
    void augmenterSection(int,Section);
    /*!
      methode qui augmente la renomm�e du bateau
      \fn setRenommee(int renommee)
      \param nb de pt de renomm�e gagn�s
      */
    void setRenommee(int renommee);
    /*!
      retourne la renomm�e gagn�e lors d'une d�route
      \fn getRenommeeDeroute()
      \return renommeeDeroute
      */
    int getRenommeeDeroute();

public slots:

    virtual void slotCombattreBateauPJ(int,int, Combats*);

signals :

    /*!
      signal qui annonce le changement de la section voile du bateau
      \param int la nouvelle valeur de l'attribut voile
      */
    void changementVoile(int);

    /*!
      signal qui annonce le changement de la section equipage du bateau
      \param int la nouvelle valeur de l'attribut equipage
      */
    void changementEquipage(int);

    /*!
      signal qui annonce le changement de la section canon du bateau
      \param int la nouvelle valeur de l'attribut canon
      */
    void changementCanon(int);

    /*!
      signal qui annonce le changement de la section coque du bateau
      \param int la nouvelle valeur de l'attribut coque
      */
    void changementCoque(int);

     /*!
      signal qui annonce le changement des doublons du bateau
      \param int la nouvelle valeur de l'attribut doublons
      */
    void changementDoublons(int);

     /*!
      signal qui annonce le changement des tresors du bateau
      \param int la nouvelle valeur de l'attribut tresors
      */
    void changementTresors(int);

     /*!
      signal qui annonce le changement de la renommee du bateau
      \param int la nouvelle valeur de l'attribut renommee
      */
    void changementRenommee(int);

    /*Les signaux suivant permettent d'activer les sliders du joueurs lorsque l'on est sur l'ile.
      Ils ne sont pas mis dans la classe BateauPJ, ils ne sont pas accessible � partir de la liste joueurs de partie (BAteau)
      */
    void positionCoque(bool);
    void positionVoile(bool);
    void positionCanon(bool);
    void positionEquipage(bool);
    void positionBateau(int);
    void valeurCoque(int);
    void valeurCanon(int);
    void valeurEquipage(int);
    void valeurVoile(int);
    void combattre(Combats*);
    void valeurNom(QString);
    void disableSlidersBateau(bool);

    /* Les signaux suivants seront emis lorsque l'on ne peut plus am�liorer une section*/
    /*!
      signal qui annonce qu'une amelioration est impossible
      \fn ameliorationImpossible()
      */
    void ameliorationImpossible();
    void signalPartieLogger(QString);
protected:
    int voile;
    int equipage;
    int canon;
    int coque;
    int coffre;
    int renommee;
    int doublon;
    int renommeeDeroute; //nbr de pt de renomm�e gagn� lorsque l'on bat ce bateau
    int position;
    PirateMapBoat *image; //chargement de l'image
    int typeBateau;
    QString nom;
    Des des;

};

#endif // BATEAU_H
