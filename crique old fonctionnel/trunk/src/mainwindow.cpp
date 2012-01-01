/*!
  \file mainwindow.h
  \brief header de la classe MainWindow

  \author Pirates' crew

  La mainWindow affiche l'ensemble des objets graphiques.
  effectue les connections entre le joueur humain et le jeu

 */

#include <QPointF>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainpiratemap.h"
#include "cartetresor.h"
#include "piratemapbackground.h"
#include "piratemapisland.h"
#include "piratemapboat.h"
#include "piratemapcartetresor.h"
#include <QMessageBox>
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  //QGraphicScene : l element qui contient les objets graphiques (modele) pour mettre dans le QGraphicView (vue)
  m_scene = new QGraphicsScene(ui->mainPirateMap);

  // Charger le fond de la carte contenue par la graphicView.
  m_PirateMapBackground = new PirateMapBackground(":/resources/images/map/pirateMapBackground.svg");
  m_PirateMapBackground->setFlags(QGraphicsItem::ItemClipsToShape);
  m_PirateMapBackground->setCacheMode(QGraphicsItem::NoCache);
  m_PirateMapBackground->setZValue(0);
  // Ajout a la scene
  m_scene->addItem(m_PirateMapBackground);



  // Arrière plan blanc.
  m_backgroundItem = new QGraphicsRectItem(m_PirateMapBackground->boundingRect());
  m_backgroundItem->setBrush(Qt::white);
  m_backgroundItem->setPen(Qt::NoPen);
  m_backgroundItem->setVisible(true);
  m_backgroundItem->setZValue(-1);
  //Ajout a la scene
  m_scene->addItem(m_backgroundItem);



  // Arrière plan encadré de pointillés.
  m_outlineItem = new QGraphicsRectItem(m_PirateMapBackground->boundingRect());
  QPen outline(Qt::black, 2, Qt::DashLine);
  outline.setCosmetic(true);
  m_outlineItem->setPen(outline);
  m_outlineItem->setBrush(Qt::NoBrush);
  m_outlineItem->setVisible(true);
  m_outlineItem->setZValue(0);
  //Ajout a la scene
  m_scene->addItem(m_outlineItem);

  ui->mainPirateMap->scale(qreal(0.3), qreal(0.3));
  ui->mainPirateMap->setMinimumSize(800, 800);


  m_scene->setSceneRect(m_outlineItem->boundingRect().adjusted(-10, -10, 10, 10));
  ui->mainPirateMap->setScene(m_scene);
}



PirateMapBackground* MainWindow::getBackground()
{
  return m_PirateMapBackground;
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked() {
 }

void MainWindow::connecterLesLabels(QVector<Bateau*> joueurs)
{
  //Connection
  QObject::connect(joueurs[0], SIGNAL(valeurNom(QString)), ui->labelJoueur, SLOT(setText(QString)));
  QObject::connect(joueurs[1], SIGNAL(valeurNom(QString)), ui->labelAdversaire1, SLOT(setText(QString)));
  QObject::connect(joueurs[2], SIGNAL(valeurNom(QString)), ui->labelAdversaire2, SLOT(setText(QString)));
  QObject::connect(joueurs[3], SIGNAL(valeurNom(QString)), ui->pirate1Name, SLOT(setText(QString)));
  QObject::connect(joueurs[4], SIGNAL(valeurNom(QString)), ui->pirate2Name, SLOT(setText(QString)));


  QObject::connect(joueurs[0], SIGNAL(disableSlidersBateau(bool)), ui->sliderlCanons, SLOT(setDisabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(disableSlidersBateau(bool)), ui->sliderCoque, SLOT(setDisabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(disableSlidersBateau(bool)), ui->sliderVoilure, SLOT(setDisabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(disableSlidersBateau(bool)), ui->sliderEquipage, SLOT(setDisabled(bool)));

  //PJ Signaux des combats
  QObject::connect(joueurs[0], SIGNAL(combattre(Combats*)), this, SLOT(slotCombattre(Combats*)));
  QObject::connect(this, SIGNAL(signalCible(int, int, Combats*)), joueurs[0], SLOT(slotCombattreBateauPJ(int, int, Combats*)));

  // PJ signaux joueurs -> label joueurs ui
  QObject::connect(joueurs[0], SIGNAL(changementDoublons(int)), ui->joueurDoublonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[0], SIGNAL(changementTresors(int)), ui->joueurTresorsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[0], SIGNAL(changementRenommee(int)), ui->joueurRenommeeValue, SLOT(setNum(int)));

  // Signaux permettant de débloquer les sliders lorsque le joueur arrive sur l'ile
  QObject::connect(joueurs[0], SIGNAL(positionCanon(bool)), ui->sliderlCanons, SLOT(setEnabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(positionCoque(bool)), ui->sliderCoque, SLOT(setEnabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(positionVoile(bool)), ui->sliderVoilure, SLOT(setEnabled(bool)));
  QObject::connect(joueurs[0], SIGNAL(positionEquipage(bool)), ui->sliderEquipage, SLOT(setEnabled(bool)));

  //Signaux affichant les messagesBox
  QObject::connect(joueurs[0], SIGNAL(ameliorationImpossible()), this, SLOT(slotAmeliorationImpossible()));

  // PJ signaux joueurs -> slides joueurs ui
  QObject::connect(joueurs[0], SIGNAL(changementVoile(int)), ui->sliderVoilure, SLOT(setValue(int)));
  QObject::connect(joueurs[0], SIGNAL(changementCanon(int)), ui->sliderlCanons, SLOT(setValue(int)));
  QObject::connect(joueurs[0], SIGNAL(changementCoque(int)), ui->sliderCoque, SLOT(setValue(int)));
  QObject::connect(joueurs[0], SIGNAL(changementEquipage(int)), ui->sliderEquipage, SLOT(setValue(int)));
  QObject::connect(joueurs[0], SIGNAL(valeurVoile(int)), ui->joueurVoileValue, SLOT(setNum(int)));
  QObject::connect(joueurs[0], SIGNAL(valeurCanon(int)), ui->joueurCanonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[0], SIGNAL(valeurCoque(int)), ui->joueurCoqueValue, SLOT(setNum(int)));
  QObject::connect(joueurs[0], SIGNAL(valeurEquipage(int)), ui->joueurEquipageValue, SLOT(setNum(int)));

  // PJ signaux adv1 -> label joueurs ui
  QObject::connect(joueurs[1], SIGNAL(changementCanon(int)), ui->adv1CanonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementVoile(int)), ui->adv1VoileValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementEquipage(int)), ui->adv1EquipageValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementCoque(int)), ui->adv1CoqueValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementRenommee(int)), ui->adv1RenommeeValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementTresors(int)), ui->adv1TresorsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(changementDoublons(int)), ui->adv1DoublonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(valeurCanon(int)), ui->adv1CanonsValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(valeurVoile(int)), ui->adv1VoileValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(valeurEquipage(int)), ui->adv1EquipageValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[1], SIGNAL(valeurCoque(int)), ui->adv1CoqueValue2, SLOT(setNum(int)));

  // PJ signaux adv2 -> label joueurs ui
  QObject::connect(joueurs[2], SIGNAL(changementCanon(int)), ui->adv2CanonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementVoile(int)), ui->adv2VoileValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementEquipage(int)), ui->adv2EquipageValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementCoque(int)), ui->adv2CoqueValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementRenommee(int)), ui->adv2RenommeeValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementTresors(int)), ui->adv2TresorsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(changementDoublons(int)), ui->adv2DoublonsValue, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(valeurCanon(int)), ui->adv2CanonsValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(valeurVoile(int)), ui->adv2VoileValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(valeurEquipage(int)), ui->adv2EquipageValue2, SLOT(setNum(int)));
  QObject::connect(joueurs[2], SIGNAL(valeurCoque(int)), ui->adv2CoqueValue2, SLOT(setNum(int)));

  //PL Connection des signaux des PL
  QObject::connect(joueurs[3], SIGNAL(changementCoque(int)), ui->pirate1CoqueValue, SLOT(setNum(int)));
  QObject::connect(joueurs[3], SIGNAL(positionBateau(int)), ui->pirate1PosValue, SLOT(setNum(int)));
  QObject::connect(joueurs[4], SIGNAL(changementCoque(int)), ui->pirate2CoqueValue, SLOT(setNum(int)));
  QObject::connect(joueurs[4], SIGNAL(positionBateau(int)), ui->pirate2PosValue, SLOT(setNum(int)));
  QObject::connect(joueurs[3],SIGNAL(valeurCanon(int)), ui->pirate1TirValue, SLOT(setNum(int)));
  QObject::connect(joueurs[4],SIGNAL(valeurCanon(int)), ui->pirate2TirValue, SLOT(setNum(int)));
}

void MainWindow::connecterWindowPartie(Partie *partie)
{
  //Signal connectant le label affichant le numéros du tour
  QObject::connect(partie, SIGNAL(signalNumTour(int)), ui->tourValue, SLOT(display(int)));
  QObject::connect(partie, SIGNAL(disableSliders(bool)), ui->sliderCoque, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(disableSliders(bool)), ui->sliderEquipage, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(disableSliders(bool)), ui->sliderlCanons, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(disableSliders(bool)), ui->sliderVoilure, SLOT(setDisabled(bool)));
  //QObject::connect(ui->pushButton, SIGNAL(clicked()),partie,SLOT(slotJouer()));

  QObject::connect(ui->pushButton, SIGNAL(clicked()), ui->joueurDestination, SLOT(slotDestination()));
  QObject::connect(ui->joueurDestination, SIGNAL(signalDestination(int)), partie, SLOT(slotJouer(int)));

  QObject::connect(partie, SIGNAL(debutDuTour(bool)), ui->boutonFinDuTour, SLOT(setEnabled(bool)));
  QObject::connect(partie, SIGNAL(debutDuTour(bool)), ui->pushButton, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(debutDuTour(bool)), ui->joueurDestination, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(finDuTour(bool)), ui->boutonFinDuTour, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(finDuTour(bool)), ui->pushButton, SLOT(setEnabled(bool)));
  QObject::connect(partie, SIGNAL(finDuTour(bool)), ui->joueurDestination, SLOT(setEnabled(bool)));
  QObject::connect(ui->boutonFinDuTour, SIGNAL(clicked()), partie, SLOT(slotFinDuTour()));

  QObject::connect(ui->sliderCoque, SIGNAL(sliderMoved(int)), partie, SLOT(slotAmeliorerSection(int)));
  QObject::connect(ui->sliderVoilure, SIGNAL(sliderMoved(int)), partie, SLOT(slotAmeliorerSection(int)));
  QObject::connect(ui->sliderlCanons, SIGNAL(sliderMoved(int)), partie, SLOT(slotAmeliorerSection(int)));
  QObject::connect(ui->sliderEquipage, SIGNAL(sliderMoved(int)), partie, SLOT(slotAmeliorerSection(int)));

  //Signal fin de partie
  QObject::connect(partie, SIGNAL(finPartie(QStringList)), this, SLOT(slotFinDePartie(QStringList)));

  //Signaux pour l'initialisation de la partie
  QObject::connect(ui->sliderCoque, SIGNAL(sliderMoved(int)), partie, SLOT(slotInitAmeliorerCoque(int)));
  QObject::connect(ui->sliderVoilure, SIGNAL(sliderMoved(int)), partie, SLOT(slotInitAmeliorerVoile(int)));
  QObject::connect(ui->sliderlCanons, SIGNAL(sliderMoved(int)), partie, SLOT(slotInitAmeliorerCanons(int)));
  QObject::connect(ui->sliderEquipage, SIGNAL(sliderMoved(int)), partie, SLOT(slotInitAmeliorerEquipage(int)));
  QObject::connect(partie, SIGNAL(finInitialisation2(bool)), ui->boutonFinDuTour, SLOT(setDisabled(bool)));
  QObject::connect(partie, SIGNAL(finInitialisation2(bool)), ui->pushButton, SLOT(setEnabled(bool)));

  QObject::connect(partie, SIGNAL(signalPartieLogger(QString)), ui->partieLogg, SLOT(append(QString)));
}

void MainWindow::slotAmeliorationImpossible()
{
  QMessageBox::information(this, "Amélioration impossible", "L'amélioration demandée est impossible. Vous devez augmenter votre sections. Vous n'avez plus de doublons.");
}

void MainWindow::slotFinDePartie(QStringList gagnants)
{

  QString gagne;
  for (int i = 0; i < gagnants.size(); i++)
    {
      gagne.append(gagnants[i] + " ");
    }
  QMessageBox::information(this, "Partie Finie", "La partie est finie!! Merci d'avoir joué. Le(s) joueurs suivant(s) a/ont gagné : " + gagne);
}

void MainWindow::slotCombattre(Combats* combat)
{
  QStringList combattantsList;
  QString nomCible;
  QString pLabsent;
  QString sectionString;
  pLabsent.clear();
  for (int i = 0; i < combat->getCombattants().size(); i++)
    {
      if (combat->getCombattants()[i]->getNom() != "Joueur")
        {
          combattantsList << combat->getCombattants()[i]->getNom();
        }
      if(combat->getCombattants()[i]->getTypeBateau()==3)
      {
          pLabsent=combat->getCombattants()[i]->getNom();
      }
    }

  if(pLabsent.isNull())
  {
    bool ok1,ok2;
    ok1= false;
    ok2 = false;
    QStringList sectionList;
    sectionList << "Voile" << "Equipage" << "Canon" << "Coque";

    while(!ok1&&!ok2)
    {
    nomCible = QInputDialog::getItem(this, "Choix de la cible", "Quel bateau souhaitez vous attaquer??", combattantsList,0,false,&ok1,0);
        if(ok1)
        {
        sectionString = QInputDialog::getItem(this, "Choix de la section ciblée", "Quelle section voulez vous attaquer?", sectionList,0,false,&ok2,0);
            if(!ok2)
            {
                ok1=false;
                ok2=false;
            }
        }
    }
}
  else
  {
      QMessageBox::information(this,"Pirate de légende présent","Un pirate de légende est présent sur l'ile. Vous visez sa coque");
      nomCible=pLabsent;
      sectionString = "Coque";
  }


  int cible = 0;
  while (combat->getCombattants()[cible]->getNom() != nomCible)
    {
      cible++;
    }


  if (sectionString == "Voile")
    {
      emit signalCible(cible, 1, combat);
    }
  else if (sectionString == "Equipage")
    {
      emit signalCible(cible, 2, combat);
    }
  else if (sectionString == "Canon")
    {
      emit signalCible(cible, 3, combat);
    }
  else
    {
      emit signalCible(cible, 4, combat);
    }

}
