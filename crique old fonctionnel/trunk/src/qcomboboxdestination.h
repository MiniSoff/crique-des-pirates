/*!
  \file qcomboboxdestination.h
  \brief header de la classe QComboBoxDestination

  Cette classe correspond au composant que l'on utilise pour selectionner la destination
  */

#include <QComboBox>

#include <stdlib.h>

#ifndef QCOMBOBOXDESTINATION_H
#define QCOMBOBOXDESTINATION_H

/*!
  \class QComboBoxDestination
  */
class QComboBoxDestination: public QComboBox
{

    Q_OBJECT

public:

    QComboBoxDestination(QWidget *parent = 0);

signals :

        /*!
          signal qui emet la destination choisie
          \param int la destination qui correspon au numero de l'ile
          */
        void signalDestination(int);

public slots :

        /*!
          slot qui declanche lorsque le signal de destination choisie est emis
          */
        void slotDestination();

};

#endif // QCOMBOBOXDESTINATION_H
