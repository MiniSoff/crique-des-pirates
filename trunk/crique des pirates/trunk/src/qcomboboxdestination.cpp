/*!
  \file qcomboboxdestination.cpp
  \brief code de la classe QComboBoxDestination

  Cette classe implement les methodes et slots de qcomboboxdestination.h
  */

#include "qcomboboxdestination.h"

QComboBoxDestination::QComboBoxDestination(QWidget *parent): QComboBox(parent)
{
}

void QComboBoxDestination::slotDestination()
{
    emit signalDestination(this->currentIndex());
}
