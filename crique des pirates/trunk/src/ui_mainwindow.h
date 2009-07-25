/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun 19. Jul 22:18:39 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qcomboboxdestination.h>
#include "mainpiratemap.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    MainPirateMap *mainPirateMap;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *TourInfos;
    QLabel *tour;
    QLCDNumber *tourValue;
    QLabel *labelAdversaire1;
    QGridLayout *gridBateauAdversaire1;
    QLabel *labelAdversaire1Voilure;
    QLabel *labelAdversaire1Coque;
    QLabel *labelAdversaire1Canons;
    QLabel *labelAdversaire1Equipage;
    QLabel *adv1VoileValue;
    QLabel *adv1CanonsValue;
    QLabel *adv1EquipageValue;
    QLabel *adv1CoqueValue;
    QLabel *adv1VoileValue2;
    QLabel *adv1CanonsValue2;
    QLabel *adv1EquipageValue2;
    QLabel *adv1CoqueValue2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGridLayout *gridInfosAdversaire1;
    QLabel *labelAdversaire1Doublons;
    QLabel *labelAdversaire1Tresors;
    QLabel *adv1DoublonsValue;
    QLabel *labelAdversaire1Renommee;
    QLabel *adv1TresorsValue;
    QLabel *adv1RenommeeValue;
    QSpacerItem *verticalSpacer;
    QLabel *labelAdversaire2;
    QGridLayout *gridBateauAdversaire2;
    QLabel *labelAdversaire2Coque_2;
    QLabel *adv2VoileValue;
    QLabel *labelAdversaire2Canons;
    QLabel *labelAdversaire2Equipage;
    QLabel *labelAdversaire2Coque;
    QLabel *adv2CanonsValue;
    QLabel *adv2EquipageValue;
    QLabel *adv2CoqueValue;
    QLabel *adv2VoileValue2;
    QLabel *adv2CanonsValue2;
    QLabel *adv2EquipageValue2;
    QLabel *adv2CoqueValue2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGridLayout *gridInfosAdversaire2;
    QLabel *labelAdversaire2Renommee;
    QLabel *adv2RenommeeValue;
    QLabel *labelAdversare2Tresors;
    QLabel *labelAdversaire2Doublons;
    QLabel *adv2DoublonsValue;
    QLabel *adv2TresorsValue;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridPiratesLegendes;
    QLabel *pirate1Name;
    QLabel *pirate2Name;
    QLabel *pirate2CoqueValue;
    QLabel *pirate1CoqueValue;
    QLabel *pirate1PosValue;
    QLabel *pirate2PosValue;
    QLabel *pirate;
    QLabel *pirateLabelCoque;
    QLabel *pirateLabelPosition;
    QLabel *label_7;
    QLabel *pirate1TirValue;
    QLabel *pirate2TirValue;
    QLabel *labelJoueur;
    QGridLayout *gridBateauJoueur;
    QSlider *sliderCoque;
    QLabel *labelEquipage;
    QLabel *labelCanons;
    QLabel *labelVoilure;
    QSlider *sliderEquipage;
    QSlider *sliderlCanons;
    QLabel *labelCoque;
    QLabel *joueurVoileValue;
    QLabel *joueurCanonsValue;
    QLabel *joueurEquipageValue;
    QLabel *joueurCoqueValue;
    QSlider *sliderVoilure;
    QGridLayout *gridInfosjoueur;
    QLabel *labelDoublons;
    QLabel *labelTresors;
    QLabel *labelRenommee;
    QLabel *joueurTresorsValue;
    QLabel *joueurDoublonsValue;
    QLabel *joueurRenommeeValue;
    QSpacerItem *verticalSpacer_4;
    QComboBoxDestination *joueurDestination;
    QPushButton *pushButton;
    QPushButton *boutonFinDuTour;
    QTextBrowser *partieLogg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainPirateMap = new MainPirateMap(centralWidget);
        mainPirateMap->setObjectName(QString::fromUtf8("mainPirateMap"));

        gridLayout->addWidget(mainPirateMap, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        TourInfos = new QHBoxLayout();
        TourInfos->setSpacing(6);
        TourInfos->setObjectName(QString::fromUtf8("TourInfos"));
        tour = new QLabel(centralWidget);
        tour->setObjectName(QString::fromUtf8("tour"));

        TourInfos->addWidget(tour);

        tourValue = new QLCDNumber(centralWidget);
        tourValue->setObjectName(QString::fromUtf8("tourValue"));
        tourValue->setSmallDecimalPoint(false);
        tourValue->setNumDigits(2);
        tourValue->setSegmentStyle(QLCDNumber::Flat);
        tourValue->setProperty("value", QVariant(0));
        tourValue->setProperty("intValue", QVariant(0));

        TourInfos->addWidget(tourValue);


        verticalLayout->addLayout(TourInfos);

        labelAdversaire1 = new QLabel(centralWidget);
        labelAdversaire1->setObjectName(QString::fromUtf8("labelAdversaire1"));
        labelAdversaire1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAdversaire1);

        gridBateauAdversaire1 = new QGridLayout();
        gridBateauAdversaire1->setSpacing(6);
        gridBateauAdversaire1->setObjectName(QString::fromUtf8("gridBateauAdversaire1"));
        labelAdversaire1Voilure = new QLabel(centralWidget);
        labelAdversaire1Voilure->setObjectName(QString::fromUtf8("labelAdversaire1Voilure"));

        gridBateauAdversaire1->addWidget(labelAdversaire1Voilure, 1, 0, 1, 1);

        labelAdversaire1Coque = new QLabel(centralWidget);
        labelAdversaire1Coque->setObjectName(QString::fromUtf8("labelAdversaire1Coque"));

        gridBateauAdversaire1->addWidget(labelAdversaire1Coque, 4, 0, 1, 1);

        labelAdversaire1Canons = new QLabel(centralWidget);
        labelAdversaire1Canons->setObjectName(QString::fromUtf8("labelAdversaire1Canons"));

        gridBateauAdversaire1->addWidget(labelAdversaire1Canons, 2, 0, 1, 1);

        labelAdversaire1Equipage = new QLabel(centralWidget);
        labelAdversaire1Equipage->setObjectName(QString::fromUtf8("labelAdversaire1Equipage"));

        gridBateauAdversaire1->addWidget(labelAdversaire1Equipage, 3, 0, 1, 1);

        adv1VoileValue = new QLabel(centralWidget);
        adv1VoileValue->setObjectName(QString::fromUtf8("adv1VoileValue"));
        adv1VoileValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1VoileValue, 1, 1, 1, 1);

        adv1CanonsValue = new QLabel(centralWidget);
        adv1CanonsValue->setObjectName(QString::fromUtf8("adv1CanonsValue"));
        adv1CanonsValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1CanonsValue, 2, 1, 1, 1);

        adv1EquipageValue = new QLabel(centralWidget);
        adv1EquipageValue->setObjectName(QString::fromUtf8("adv1EquipageValue"));
        adv1EquipageValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1EquipageValue, 3, 1, 1, 1);

        adv1CoqueValue = new QLabel(centralWidget);
        adv1CoqueValue->setObjectName(QString::fromUtf8("adv1CoqueValue"));
        adv1CoqueValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1CoqueValue, 4, 1, 1, 1);

        adv1VoileValue2 = new QLabel(centralWidget);
        adv1VoileValue2->setObjectName(QString::fromUtf8("adv1VoileValue2"));
        adv1VoileValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1VoileValue2, 1, 2, 1, 1);

        adv1CanonsValue2 = new QLabel(centralWidget);
        adv1CanonsValue2->setObjectName(QString::fromUtf8("adv1CanonsValue2"));
        adv1CanonsValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1CanonsValue2, 2, 2, 1, 1);

        adv1EquipageValue2 = new QLabel(centralWidget);
        adv1EquipageValue2->setObjectName(QString::fromUtf8("adv1EquipageValue2"));
        adv1EquipageValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1EquipageValue2, 3, 2, 1, 1);

        adv1CoqueValue2 = new QLabel(centralWidget);
        adv1CoqueValue2->setObjectName(QString::fromUtf8("adv1CoqueValue2"));
        adv1CoqueValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(adv1CoqueValue2, 4, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire1->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridBateauAdversaire1);

        gridInfosAdversaire1 = new QGridLayout();
        gridInfosAdversaire1->setSpacing(6);
        gridInfosAdversaire1->setObjectName(QString::fromUtf8("gridInfosAdversaire1"));
        labelAdversaire1Doublons = new QLabel(centralWidget);
        labelAdversaire1Doublons->setObjectName(QString::fromUtf8("labelAdversaire1Doublons"));

        gridInfosAdversaire1->addWidget(labelAdversaire1Doublons, 0, 0, 1, 1);

        labelAdversaire1Tresors = new QLabel(centralWidget);
        labelAdversaire1Tresors->setObjectName(QString::fromUtf8("labelAdversaire1Tresors"));

        gridInfosAdversaire1->addWidget(labelAdversaire1Tresors, 1, 0, 1, 1);

        adv1DoublonsValue = new QLabel(centralWidget);
        adv1DoublonsValue->setObjectName(QString::fromUtf8("adv1DoublonsValue"));

        gridInfosAdversaire1->addWidget(adv1DoublonsValue, 0, 1, 1, 1);

        labelAdversaire1Renommee = new QLabel(centralWidget);
        labelAdversaire1Renommee->setObjectName(QString::fromUtf8("labelAdversaire1Renommee"));

        gridInfosAdversaire1->addWidget(labelAdversaire1Renommee, 2, 0, 1, 1);

        adv1TresorsValue = new QLabel(centralWidget);
        adv1TresorsValue->setObjectName(QString::fromUtf8("adv1TresorsValue"));

        gridInfosAdversaire1->addWidget(adv1TresorsValue, 1, 1, 1, 1);

        adv1RenommeeValue = new QLabel(centralWidget);
        adv1RenommeeValue->setObjectName(QString::fromUtf8("adv1RenommeeValue"));

        gridInfosAdversaire1->addWidget(adv1RenommeeValue, 2, 1, 1, 1);


        verticalLayout->addLayout(gridInfosAdversaire1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelAdversaire2 = new QLabel(centralWidget);
        labelAdversaire2->setObjectName(QString::fromUtf8("labelAdversaire2"));
        labelAdversaire2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAdversaire2);

        gridBateauAdversaire2 = new QGridLayout();
        gridBateauAdversaire2->setSpacing(6);
        gridBateauAdversaire2->setObjectName(QString::fromUtf8("gridBateauAdversaire2"));
        labelAdversaire2Coque_2 = new QLabel(centralWidget);
        labelAdversaire2Coque_2->setObjectName(QString::fromUtf8("labelAdversaire2Coque_2"));

        gridBateauAdversaire2->addWidget(labelAdversaire2Coque_2, 1, 0, 1, 1);

        adv2VoileValue = new QLabel(centralWidget);
        adv2VoileValue->setObjectName(QString::fromUtf8("adv2VoileValue"));
        adv2VoileValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2VoileValue, 1, 1, 1, 1);

        labelAdversaire2Canons = new QLabel(centralWidget);
        labelAdversaire2Canons->setObjectName(QString::fromUtf8("labelAdversaire2Canons"));

        gridBateauAdversaire2->addWidget(labelAdversaire2Canons, 2, 0, 1, 1);

        labelAdversaire2Equipage = new QLabel(centralWidget);
        labelAdversaire2Equipage->setObjectName(QString::fromUtf8("labelAdversaire2Equipage"));

        gridBateauAdversaire2->addWidget(labelAdversaire2Equipage, 3, 0, 1, 1);

        labelAdversaire2Coque = new QLabel(centralWidget);
        labelAdversaire2Coque->setObjectName(QString::fromUtf8("labelAdversaire2Coque"));

        gridBateauAdversaire2->addWidget(labelAdversaire2Coque, 4, 0, 1, 1);

        adv2CanonsValue = new QLabel(centralWidget);
        adv2CanonsValue->setObjectName(QString::fromUtf8("adv2CanonsValue"));
        adv2CanonsValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2CanonsValue, 2, 1, 1, 1);

        adv2EquipageValue = new QLabel(centralWidget);
        adv2EquipageValue->setObjectName(QString::fromUtf8("adv2EquipageValue"));
        adv2EquipageValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2EquipageValue, 3, 1, 1, 1);

        adv2CoqueValue = new QLabel(centralWidget);
        adv2CoqueValue->setObjectName(QString::fromUtf8("adv2CoqueValue"));
        adv2CoqueValue->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2CoqueValue, 4, 1, 1, 1);

        adv2VoileValue2 = new QLabel(centralWidget);
        adv2VoileValue2->setObjectName(QString::fromUtf8("adv2VoileValue2"));
        adv2VoileValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2VoileValue2, 1, 2, 1, 1);

        adv2CanonsValue2 = new QLabel(centralWidget);
        adv2CanonsValue2->setObjectName(QString::fromUtf8("adv2CanonsValue2"));
        adv2CanonsValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2CanonsValue2, 2, 2, 1, 1);

        adv2EquipageValue2 = new QLabel(centralWidget);
        adv2EquipageValue2->setObjectName(QString::fromUtf8("adv2EquipageValue2"));
        adv2EquipageValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2EquipageValue2, 3, 2, 1, 1);

        adv2CoqueValue2 = new QLabel(centralWidget);
        adv2CoqueValue2->setObjectName(QString::fromUtf8("adv2CoqueValue2"));
        adv2CoqueValue2->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(adv2CoqueValue2, 4, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridBateauAdversaire2->addWidget(label_6, 0, 2, 1, 1);


        verticalLayout->addLayout(gridBateauAdversaire2);

        gridInfosAdversaire2 = new QGridLayout();
        gridInfosAdversaire2->setSpacing(6);
        gridInfosAdversaire2->setObjectName(QString::fromUtf8("gridInfosAdversaire2"));
        labelAdversaire2Renommee = new QLabel(centralWidget);
        labelAdversaire2Renommee->setObjectName(QString::fromUtf8("labelAdversaire2Renommee"));

        gridInfosAdversaire2->addWidget(labelAdversaire2Renommee, 2, 0, 1, 1);

        adv2RenommeeValue = new QLabel(centralWidget);
        adv2RenommeeValue->setObjectName(QString::fromUtf8("adv2RenommeeValue"));

        gridInfosAdversaire2->addWidget(adv2RenommeeValue, 2, 1, 1, 1);

        labelAdversare2Tresors = new QLabel(centralWidget);
        labelAdversare2Tresors->setObjectName(QString::fromUtf8("labelAdversare2Tresors"));

        gridInfosAdversaire2->addWidget(labelAdversare2Tresors, 1, 0, 1, 1);

        labelAdversaire2Doublons = new QLabel(centralWidget);
        labelAdversaire2Doublons->setObjectName(QString::fromUtf8("labelAdversaire2Doublons"));

        gridInfosAdversaire2->addWidget(labelAdversaire2Doublons, 0, 0, 1, 1);

        adv2DoublonsValue = new QLabel(centralWidget);
        adv2DoublonsValue->setObjectName(QString::fromUtf8("adv2DoublonsValue"));

        gridInfosAdversaire2->addWidget(adv2DoublonsValue, 0, 1, 1, 1);

        adv2TresorsValue = new QLabel(centralWidget);
        adv2TresorsValue->setObjectName(QString::fromUtf8("adv2TresorsValue"));

        gridInfosAdversaire2->addWidget(adv2TresorsValue, 1, 1, 1, 1);


        verticalLayout->addLayout(gridInfosAdversaire2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        gridPiratesLegendes = new QGridLayout();
        gridPiratesLegendes->setSpacing(6);
        gridPiratesLegendes->setObjectName(QString::fromUtf8("gridPiratesLegendes"));
        gridPiratesLegendes->setSizeConstraint(QLayout::SetFixedSize);
        gridPiratesLegendes->setContentsMargins(-1, 0, 0, -1);
        pirate1Name = new QLabel(centralWidget);
        pirate1Name->setObjectName(QString::fromUtf8("pirate1Name"));

        gridPiratesLegendes->addWidget(pirate1Name, 2, 0, 1, 1);

        pirate2Name = new QLabel(centralWidget);
        pirate2Name->setObjectName(QString::fromUtf8("pirate2Name"));

        gridPiratesLegendes->addWidget(pirate2Name, 4, 0, 1, 1);

        pirate2CoqueValue = new QLabel(centralWidget);
        pirate2CoqueValue->setObjectName(QString::fromUtf8("pirate2CoqueValue"));

        gridPiratesLegendes->addWidget(pirate2CoqueValue, 4, 1, 1, 1);

        pirate1CoqueValue = new QLabel(centralWidget);
        pirate1CoqueValue->setObjectName(QString::fromUtf8("pirate1CoqueValue"));
        pirate1CoqueValue->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirate1CoqueValue, 2, 1, 1, 1);

        pirate1PosValue = new QLabel(centralWidget);
        pirate1PosValue->setObjectName(QString::fromUtf8("pirate1PosValue"));
        pirate1PosValue->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirate1PosValue, 2, 2, 1, 1);

        pirate2PosValue = new QLabel(centralWidget);
        pirate2PosValue->setObjectName(QString::fromUtf8("pirate2PosValue"));
        pirate2PosValue->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirate2PosValue, 4, 2, 1, 1);

        pirate = new QLabel(centralWidget);
        pirate->setObjectName(QString::fromUtf8("pirate"));

        gridPiratesLegendes->addWidget(pirate, 1, 0, 1, 1);

        pirateLabelCoque = new QLabel(centralWidget);
        pirateLabelCoque->setObjectName(QString::fromUtf8("pirateLabelCoque"));
        pirateLabelCoque->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirateLabelCoque, 1, 1, 1, 1);

        pirateLabelPosition = new QLabel(centralWidget);
        pirateLabelPosition->setObjectName(QString::fromUtf8("pirateLabelPosition"));
        pirateLabelPosition->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirateLabelPosition, 1, 2, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(label_7, 1, 3, 1, 1);

        pirate1TirValue = new QLabel(centralWidget);
        pirate1TirValue->setObjectName(QString::fromUtf8("pirate1TirValue"));
        pirate1TirValue->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirate1TirValue, 2, 3, 1, 1);

        pirate2TirValue = new QLabel(centralWidget);
        pirate2TirValue->setObjectName(QString::fromUtf8("pirate2TirValue"));
        pirate2TirValue->setAlignment(Qt::AlignCenter);

        gridPiratesLegendes->addWidget(pirate2TirValue, 4, 3, 1, 1);


        verticalLayout->addLayout(gridPiratesLegendes);

        labelJoueur = new QLabel(centralWidget);
        labelJoueur->setObjectName(QString::fromUtf8("labelJoueur"));
        labelJoueur->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelJoueur);

        gridBateauJoueur = new QGridLayout();
        gridBateauJoueur->setSpacing(6);
        gridBateauJoueur->setObjectName(QString::fromUtf8("gridBateauJoueur"));
        sliderCoque = new QSlider(centralWidget);
        sliderCoque->setObjectName(QString::fromUtf8("sliderCoque"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sliderCoque->sizePolicy().hasHeightForWidth());
        sliderCoque->setSizePolicy(sizePolicy1);
        sliderCoque->setMinimum(0);
        sliderCoque->setMaximum(8);
        sliderCoque->setOrientation(Qt::Horizontal);
        sliderCoque->setTickPosition(QSlider::TicksBelow);
        sliderCoque->setTickInterval(1);

        gridBateauJoueur->addWidget(sliderCoque, 4, 2, 1, 1);

        labelEquipage = new QLabel(centralWidget);
        labelEquipage->setObjectName(QString::fromUtf8("labelEquipage"));

        gridBateauJoueur->addWidget(labelEquipage, 3, 0, 1, 1);

        labelCanons = new QLabel(centralWidget);
        labelCanons->setObjectName(QString::fromUtf8("labelCanons"));

        gridBateauJoueur->addWidget(labelCanons, 2, 0, 1, 1);

        labelVoilure = new QLabel(centralWidget);
        labelVoilure->setObjectName(QString::fromUtf8("labelVoilure"));

        gridBateauJoueur->addWidget(labelVoilure, 1, 0, 1, 1);

        sliderEquipage = new QSlider(centralWidget);
        sliderEquipage->setObjectName(QString::fromUtf8("sliderEquipage"));
        sizePolicy1.setHeightForWidth(sliderEquipage->sizePolicy().hasHeightForWidth());
        sliderEquipage->setSizePolicy(sizePolicy1);
        sliderEquipage->setMinimum(0);
        sliderEquipage->setMaximum(8);
        sliderEquipage->setOrientation(Qt::Horizontal);
        sliderEquipage->setTickPosition(QSlider::TicksBelow);
        sliderEquipage->setTickInterval(1);

        gridBateauJoueur->addWidget(sliderEquipage, 3, 2, 1, 1);

        sliderlCanons = new QSlider(centralWidget);
        sliderlCanons->setObjectName(QString::fromUtf8("sliderlCanons"));
        sizePolicy1.setHeightForWidth(sliderlCanons->sizePolicy().hasHeightForWidth());
        sliderlCanons->setSizePolicy(sizePolicy1);
        sliderlCanons->setMinimum(0);
        sliderlCanons->setMaximum(8);
        sliderlCanons->setOrientation(Qt::Horizontal);
        sliderlCanons->setTickPosition(QSlider::TicksBelow);
        sliderlCanons->setTickInterval(1);

        gridBateauJoueur->addWidget(sliderlCanons, 2, 2, 1, 1);

        labelCoque = new QLabel(centralWidget);
        labelCoque->setObjectName(QString::fromUtf8("labelCoque"));

        gridBateauJoueur->addWidget(labelCoque, 4, 0, 1, 1);

        joueurVoileValue = new QLabel(centralWidget);
        joueurVoileValue->setObjectName(QString::fromUtf8("joueurVoileValue"));

        gridBateauJoueur->addWidget(joueurVoileValue, 1, 1, 1, 1);

        joueurCanonsValue = new QLabel(centralWidget);
        joueurCanonsValue->setObjectName(QString::fromUtf8("joueurCanonsValue"));

        gridBateauJoueur->addWidget(joueurCanonsValue, 2, 1, 1, 1);

        joueurEquipageValue = new QLabel(centralWidget);
        joueurEquipageValue->setObjectName(QString::fromUtf8("joueurEquipageValue"));

        gridBateauJoueur->addWidget(joueurEquipageValue, 3, 1, 1, 1);

        joueurCoqueValue = new QLabel(centralWidget);
        joueurCoqueValue->setObjectName(QString::fromUtf8("joueurCoqueValue"));

        gridBateauJoueur->addWidget(joueurCoqueValue, 4, 1, 1, 1);

        sliderVoilure = new QSlider(centralWidget);
        sliderVoilure->setObjectName(QString::fromUtf8("sliderVoilure"));
        sizePolicy1.setHeightForWidth(sliderVoilure->sizePolicy().hasHeightForWidth());
        sliderVoilure->setSizePolicy(sizePolicy1);
        sliderVoilure->setMinimum(0);
        sliderVoilure->setMaximum(9);
        sliderVoilure->setValue(2);
        sliderVoilure->setOrientation(Qt::Horizontal);
        sliderVoilure->setTickPosition(QSlider::TicksBelow);
        sliderVoilure->setTickInterval(1);
        QPalette palette;
        sliderVoilure->setProperty("couleur", QVariant(palette));

        gridBateauJoueur->addWidget(sliderVoilure, 1, 2, 1, 1);


        verticalLayout->addLayout(gridBateauJoueur);

        gridInfosjoueur = new QGridLayout();
        gridInfosjoueur->setSpacing(6);
        gridInfosjoueur->setObjectName(QString::fromUtf8("gridInfosjoueur"));
        labelDoublons = new QLabel(centralWidget);
        labelDoublons->setObjectName(QString::fromUtf8("labelDoublons"));

        gridInfosjoueur->addWidget(labelDoublons, 1, 0, 1, 1);

        labelTresors = new QLabel(centralWidget);
        labelTresors->setObjectName(QString::fromUtf8("labelTresors"));

        gridInfosjoueur->addWidget(labelTresors, 2, 0, 1, 1);

        labelRenommee = new QLabel(centralWidget);
        labelRenommee->setObjectName(QString::fromUtf8("labelRenommee"));

        gridInfosjoueur->addWidget(labelRenommee, 3, 0, 1, 1);

        joueurTresorsValue = new QLabel(centralWidget);
        joueurTresorsValue->setObjectName(QString::fromUtf8("joueurTresorsValue"));

        gridInfosjoueur->addWidget(joueurTresorsValue, 2, 1, 1, 1);

        joueurDoublonsValue = new QLabel(centralWidget);
        joueurDoublonsValue->setObjectName(QString::fromUtf8("joueurDoublonsValue"));

        gridInfosjoueur->addWidget(joueurDoublonsValue, 1, 1, 1, 1);

        joueurRenommeeValue = new QLabel(centralWidget);
        joueurRenommeeValue->setObjectName(QString::fromUtf8("joueurRenommeeValue"));

        gridInfosjoueur->addWidget(joueurRenommeeValue, 3, 1, 1, 1);


        verticalLayout->addLayout(gridInfosjoueur);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        joueurDestination = new QComboBoxDestination(centralWidget);
        joueurDestination->setObjectName(QString::fromUtf8("joueurDestination"));

        verticalLayout->addWidget(joueurDestination);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        boutonFinDuTour = new QPushButton(centralWidget);
        boutonFinDuTour->setObjectName(QString::fromUtf8("boutonFinDuTour"));

        verticalLayout->addWidget(boutonFinDuTour);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        partieLogg = new QTextBrowser(centralWidget);
        partieLogg->setObjectName(QString::fromUtf8("partieLogg"));
        partieLogg->setMaximumSize(QSize(16777215, 75));

        gridLayout->addWidget(partieLogg, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Crique des Pirates", 0, QApplication::UnicodeUTF8));
        tour->setText(QApplication::translate("MainWindow", "Tour : ", 0, QApplication::UnicodeUTF8));
        labelAdversaire1->setText(QApplication::translate("MainWindow", "Captain Red", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Voilure->setText(QApplication::translate("MainWindow", "Voilure", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Coque->setText(QApplication::translate("MainWindow", "Coque", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Canons->setText(QApplication::translate("MainWindow", "Canons", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Equipage->setText(QApplication::translate("MainWindow", "Equipage", 0, QApplication::UnicodeUTF8));
        adv1VoileValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1CanonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1EquipageValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1CoqueValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1VoileValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1CanonsValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1EquipageValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1CoqueValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Niveau", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Valeur", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Section", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Doublons->setText(QApplication::translate("MainWindow", "Doublons", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Tresors->setText(QApplication::translate("MainWindow", "Tresors", 0, QApplication::UnicodeUTF8));
        adv1DoublonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdversaire1Renommee->setText(QApplication::translate("MainWindow", "Renommee", 0, QApplication::UnicodeUTF8));
        adv1TresorsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv1RenommeeValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdversaire2->setText(QApplication::translate("MainWindow", "Captain Violet", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Coque_2->setText(QApplication::translate("MainWindow", "Voilure", 0, QApplication::UnicodeUTF8));
        adv2VoileValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Canons->setText(QApplication::translate("MainWindow", "Canons", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Equipage->setText(QApplication::translate("MainWindow", "Equipage", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Coque->setText(QApplication::translate("MainWindow", "Coque", 0, QApplication::UnicodeUTF8));
        adv2CanonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2EquipageValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2CoqueValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2VoileValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2CanonsValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2EquipageValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2CoqueValue2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Section", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Niveau", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Valeur", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Renommee->setText(QApplication::translate("MainWindow", "Renommee", 0, QApplication::UnicodeUTF8));
        adv2RenommeeValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelAdversare2Tresors->setText(QApplication::translate("MainWindow", "Tresors", 0, QApplication::UnicodeUTF8));
        labelAdversaire2Doublons->setText(QApplication::translate("MainWindow", "Doublons", 0, QApplication::UnicodeUTF8));
        adv2DoublonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        adv2TresorsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Pirates de l\303\251gende", 0, QApplication::UnicodeUTF8));
        pirate1Name->setText(QApplication::translate("MainWindow", "Jack Sparow", 0, QApplication::UnicodeUTF8));
        pirate2Name->setText(QApplication::translate("MainWindow", "Jacqueline Sparow", 0, QApplication::UnicodeUTF8));
        pirate2CoqueValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pirate1CoqueValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pirate1PosValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pirate2PosValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pirate->setText(QApplication::translate("MainWindow", "Pirate", 0, QApplication::UnicodeUTF8));
        pirateLabelCoque->setText(QApplication::translate("MainWindow", "Coque", 0, QApplication::UnicodeUTF8));
        pirateLabelPosition->setText(QApplication::translate("MainWindow", "Position", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Canons", 0, QApplication::UnicodeUTF8));
        pirate1TirValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pirate2TirValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelJoueur->setText(QApplication::translate("MainWindow", "Joueur : Yellow", 0, QApplication::UnicodeUTF8));
        labelEquipage->setText(QApplication::translate("MainWindow", "Equipage", 0, QApplication::UnicodeUTF8));
        labelCanons->setText(QApplication::translate("MainWindow", "Canons", 0, QApplication::UnicodeUTF8));
        labelVoilure->setText(QApplication::translate("MainWindow", "Voilure", 0, QApplication::UnicodeUTF8));
        labelCoque->setText(QApplication::translate("MainWindow", "Coque", 0, QApplication::UnicodeUTF8));
        joueurVoileValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurCanonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurEquipageValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurCoqueValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelDoublons->setText(QApplication::translate("MainWindow", "Doublons", 0, QApplication::UnicodeUTF8));
        labelTresors->setText(QApplication::translate("MainWindow", "Tresors", 0, QApplication::UnicodeUTF8));
        labelRenommee->setText(QApplication::translate("MainWindow", "Renommee", 0, QApplication::UnicodeUTF8));
        joueurTresorsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurDoublonsValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurRenommeeValue->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        joueurDestination->clear();
        joueurDestination->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Taverne", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Coque", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Voile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Canons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Equipage", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ile aux tr\303\251sors", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Au suivant", 0, QApplication::UnicodeUTF8));
        boutonFinDuTour->setText(QApplication::translate("MainWindow", "Fin du Tour", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
