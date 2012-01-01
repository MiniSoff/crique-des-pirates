#include "partie.h"
#include "factory.h"
#include "mainwindow.h"
#include "bateau.h"
/*!
  \file partie.h
  \brief header de la classe Partie

  \author Pirates' crew

 La classe partie gère le déroulement de la partie.
 Envoi les signaux de début et de fin de tour à l'ui

 */

#include "combats.h"

Partie::Partie(MainWindow *w, Des desTemp)
{
  nTour = 0;

  iles = Factory::genererLesIles(w->getBackground());
  joueurs = Factory::genererLesBateaux(w->getBackground(), &des);
  this->des = desTemp;
}

/**
 *Fonction principale de la classe, permet de déclencher le jeu
 */

void Partie::slotJouer(int destination)
{
  if (nTour <= 12)
    {
      emit debutDuTour(true);
      phaseNavigation(destination);
      phaseCombat();
      phasePillage();
      phaseEffetDesIles();
    }
  else
    {
      emit disableSliders(true);
      emit finPartie(gagnant());
    }

}


//Permet de déterminer le gagnant

QStringList Partie::gagnant()
{
  QStringList gagnants;
  gagnants.append(joueurs[0]->getNom());
  int g = 0;
  for (int i(1); i < joueurs.size(); i++)
    {
      if (joueurs[i]->getRenommee() > joueurs[g]->getRenommee())
        {
          gagnants.clear();
          gagnants.append(joueurs[i]->getNom());
        }
      else if (joueurs[i]->getRenommee() == joueurs[g]->getRenommee())
        {
          gagnants.append(joueurs[i]->getNom());
          g = i;
        }
    }
  return gagnants;
}

void Partie::initialisationPartie()
{
  emit signalPartieLogger("Initialisation Partie");
  placerLesIles();
  placerLesBateaux();

  for (int i = 0; i < joueurs.size(); i++)
    {
      joueurs[i]->initialiserLabel();
    }
  emit finDuTour(true);
  emit signalNumTour(nTour);

  for (int i = 0; i < iles.size(); i++)
    {
      for (int j = 0; j < iles[i]->getCartesTresors().size(); j++)
        {
          iles[i]->getCartesTresors()[j]->getImage()->hide();
        }
    }
  iles[0]->getCartesTresors()[0]->getImage()->show();
  iles[1]->getCartesTresors()[0]->getImage()->show();
  iles[2]->getCartesTresors()[0]->getImage()->show();
  iles[3]->getCartesTresors()[0]->getImage()->show();
  iles[4]->getCartesTresors()[0]->getImage()->show();
  emit signalPartieLogger("Fin initialisation partie");
  emit debutDuTour(true);
}

void Partie::placerLesIles()
{
  iles[0]->getImage()->setPos(700, 1600);
  placerLesCartesTresors(iles[0], 0);

  iles[1]->getImage()->setPos(50, 900);
  placerLesCartesTresors(iles[1], 1);

  iles[2]->getImage()->setPos(45, 25);
  placerLesCartesTresors(iles[2], 2);

  iles[3]->getImage()->setPos(1460, 70);
  placerLesCartesTresors(iles[3], 3);

  iles[4]->getImage()->setPos(1400, 1550);
  placerLesCartesTresors(iles[4], 4);

  iles[5]->getImage()->setPos(800, 700);
  iles[6]->getImage()->setPos(1150, 1050);

}

void Partie::placerLesBateaux()
{
  joueurs[3]->goToPosition(0, this);
  joueurs[4]->goToPosition(3, this);
}

void Partie::placerLesCartesTresors(Ile* ile, int numIle)
{
  //foreach(Ile* tmp_ile, iles)
  //{
  switch (numIle)
    {

      case 0:
        foreach(CarteTresor* tmp_carteTresor, ile->getCartesTresors())
        {
          tmp_carteTresor->getImage()->moveBy(700, 1600);
        }
        break;

      case 1:
        foreach(CarteTresor* tmp_carteTresor, ile->getCartesTresors())
        {
          tmp_carteTresor->getImage()->moveBy(50, 900);
        }
        break;

      case 2:
        foreach(CarteTresor* tmp_carteTresor, ile->getCartesTresors())
        {
          tmp_carteTresor->getImage()->moveBy(45, 25);
        }

        break;

      case 3:
        foreach(CarteTresor* tmp_carteTresor, ile->getCartesTresors())
        {
          tmp_carteTresor->getImage()->moveBy(1600, 0);
        }

        break;

      case 4:
        foreach(CarteTresor* tmp_carteTresor, ile->getCartesTresors())
        {
          tmp_carteTresor->getImage()->moveBy(1850, 1550);
        }
        break;
    }

  //}
}

QVector<Bateau*> Partie::getJoueurs()
{
  return joueurs;
}

void Partie::phaseFinDuTour()
{
  for (int i = 0; i < joueurs.size(); i++)
    {
      joueurs[i]->verifierCoffre();
    }
  joueurs[3]->naviguer(this);
  joueurs[4]->naviguer(this);
  emit signalPartieLogger("Fin du tour : " + nTour);
}

void Partie::phaseNavigation(int destination)
{
  emit signalPartieLogger("Phase navigation : ");
  joueurs[0]->naviguer(destination, this);
  joueurs[1]->naviguer(this);
  joueurs[2]->naviguer(this);

  for (int i = 0; i < 3; i++)
    {
      emit signalPartieLogger(joueurs[i]->getNom() + " est à la position " + QString::number(joueurs[i]->getPosition()));
    }
}

void Partie::slotFinDuTour()
{
  emit disableSliders(true);
  if (nTour == 0)
    {
      emit disableSliders(true);
      nTour = 1;
      emit finDuTour(true);
      emit signalNumTour(nTour);
    }
  else
    {
      if (nTour < 12)
        {
          for (int i = 0; i < 5; i++)
            {
              iles[i]->changerCarte(nTour);
            }
          emit finDuTour(true);
          phaseFinDuTour();
          phaseReparation();
          nTour++;
          emit signalNumTour(nTour);
        }
      else
        {
          emit finPartie(gagnant());
        }
    }
}

void Partie::slotAmeliorerSection(int nivAmelioration)
{
  if (nTour != 0)
    {
      switch (joueurs[0]->getPosition())
        {
          case 1:
            if (nivAmelioration >= joueurs[0]->getCoque())
              {
                joueurs[0]->ameliorerSection(nivAmelioration - joueurs[0]->getCoque(), Bateau::Coque);
              }
            else
              {
                emit joueurs[0]->emettreAmeliorationImpossible();
                emit joueurs[0]->emettreChgCoque();
              }
            break;
          case 2:
            if (nivAmelioration >= joueurs[0]->getVoile())
              {
                joueurs[0]->ameliorerSection(nivAmelioration - joueurs[0]->getVoile(), Bateau::Voile);
              }
            else
              {
                emit joueurs[0]->emettreAmeliorationImpossible();
                emit joueurs[0]->emettreChgVoile();
              }
            break;
          case 3:
            if (nivAmelioration >= joueurs[0]->getCanons())
              {
                joueurs[0]->ameliorerSection(nivAmelioration - joueurs[0]->getCanons(), Bateau::Canon);
              }
            else
              {
                emit joueurs[0]->emettreAmeliorationImpossible();
                emit joueurs[0]->emettreChgCanon();
              }
            break;
          case 4:
            if (nivAmelioration >= joueurs[0]->getEquipage())
              {
                joueurs[0]->ameliorerSection(nivAmelioration - joueurs[0]->getEquipage(), Bateau::Equipage);
              }
            else
              {
                emit joueurs[0]->emettreAmeliorationImpossible();
                emit joueurs[0]->emettreChgEquipage();
              }
            break;
        }
    }
}

void Partie::phaseEffetDesIles()
{
  joueurs[0]->effetDesIles();
  joueurs[1]->effetDesIles();
  joueurs[2]->effetDesIles();
}

void Partie::phasePillage()
{
  joueurs[0]->recupererCarteTresors(iles[joueurs[0]->getPosition()]->getCartesTresors()[nTour - 1], des);
  joueurs[1]->recupererCarteTresors(iles[joueurs[1]->getPosition()]->getCartesTresors()[nTour - 1], des);
  joueurs[2]->recupererCarteTresors(iles[joueurs[2]->getPosition()]->getCartesTresors()[nTour - 1], des);
}

QVector<Ile*> Partie::getIle()
{
  return iles;
}

void Partie::phaseCombat()
{
  QVector<Bateau*> combattantsIleTaverne;
  QVector<Bateau*> combattantsIleCoque;
  QVector<Bateau*> combattantsIleVoile;
  QVector<Bateau*> combattantsIleCanons;
  QVector<Bateau*> combattantsIleEquipage;
  QVector<Bateau*> combattantsIleTresors;
  for (int i = 0; i < joueurs.size(); i++)
    {
      switch (joueurs[i]->getPosition())
        {
          case 0:
            combattantsIleTaverne.append(joueurs[i]);
            break;
          case 1:
            combattantsIleCoque.append(joueurs[i]);
            break;
          case 2:
            combattantsIleVoile.append(joueurs[i]);
            break;
          case 3:
            combattantsIleCanons.append(joueurs[i]);
            break;
          case 4:
            combattantsIleEquipage.append(joueurs[i]);
            break;
          case 5:
            combattantsIleTresors.append(joueurs[i]);
            break;
        }
    }
  if (combattantsIleTaverne.size() > 1)
    {
      emit signalPartieLogger("Début des combats sur l'ile de la taverne");
      Combats combat(combattantsIleTaverne);
      combat.combattre(this);
      emit signalPartieLogger("Fin des combats sur l'ile de la taverne");
    }
  if (combattantsIleCoque.size() > 1)
    {
      emit signalPartieLogger("Début des combats sur l'ile de la coque");
      Combats combat(combattantsIleCoque);
      combat.combattre(this);
      emit signalPartieLogger("Fin des combats sur l'ile de la coque");
    }
  if (combattantsIleVoile.size() > 1)
    {
      emit signalPartieLogger("Début des combats sur l'ile de la voile");
      Combats combat(combattantsIleVoile);
      combat.combattre(this);
      emit signalPartieLogger("Fin des combats sur l'ile de la voile");
    }
  if (combattantsIleCanons.size() > 1)
    {
      emit signalPartieLogger("Début des combats sur l'ile des canons");
      Combats combat(combattantsIleCanons);
      combat.combattre(this);
      emit signalPartieLogger("Fin des combats sur l'ile des canons");
    }
  if (combattantsIleEquipage.size() > 1)
    {
      emit signalPartieLogger("Début des combats sur l'ile des équipages");
      Combats combat(combattantsIleEquipage);
      combat.combattre(this);
      emit signalPartieLogger("Fin des combats sur l'ile des équipages");
    }
  if (combattantsIleTresors.size() > 1)
    {
      bool pLPresent = false;
      for (int i = 0; i < combattantsIleTresors.size(); i++)
        {
          if (combattantsIleTresors[i]->getTypeBateau() == 3)
            {
              pLPresent = true;
            }
        }

      if (pLPresent)
        {
          Combats combat(combattantsIleTaverne);
          combat.combattre(this);
        }
    }
}

int Partie::getNTour()
{
  return nTour;
}

void Partie::phaseReparation()
{
  for (int i = 0; i < joueurs.size(); i++)
    {
      if (joueurs[i]->getPosition() == 6 || joueurs[i]->getTypeBateau() > 2)
        {
          joueurs[i]->reparer();
        }
    }
}

void Partie::slotInitAmeliorerVoile(int nbAmeliorations)
{
  int nb = nbAmeliorations - joueurs[0]->getVoile();
  if (nTour == 0)
    {
      joueurs[0]->ameliorerSection(nb, Bateau::Voile);
    }
}

void Partie::slotInitAmeliorerEquipage(int nbAmeliorations)
{
  int nb = nbAmeliorations - joueurs[0]->getEquipage();
  if (nTour == 0)
    {
      joueurs[0]->ameliorerSection(nb, Bateau::Equipage);
    }
}

void Partie::slotInitAmeliorerCanons(int nbAmeliorations)
{
  int nb = nbAmeliorations - joueurs[0]->getCanons();
  if (nTour == 0)
    {
      joueurs[0]->ameliorerSection(nb, Bateau::Canon);
    }
}

void Partie::slotInitAmeliorerCoque(int nbAmeliorations)
{
  int nb = nbAmeliorations - joueurs[0]->getCoque();
  if (nTour == 0)
    {
      joueurs[0]->ameliorerSection(nb, Bateau::Coque);
    }
}

void Partie::emitSignalPartieLogger(QString chaine)
{
  emit signalPartieLogger(chaine);
}
