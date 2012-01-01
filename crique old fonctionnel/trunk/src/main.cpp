/*!
  \file main.cpp
  \brief Main method of the project

  \author Pirates' crew

  This method contains the main loop for our project "Crique des Pirates" </br>
  It starts the state machine for the game

  */

#include <QtGui/QApplication>
#include "partie.h"
#include "mainwindow.h"
#include "des.h"

/*!
  \fn int main(int argc, char *argv[])
  \return exit code 0
  */
int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(pirateMapElements);

    QApplication a(argc, argv);
    MainWindow window;
    MainWindow *w = &window;

    Des des;
    Partie partie(w, des);
    window.connecterLesLabels(partie.getJoueurs());
    window.connecterWindowPartie(&partie);
    partie.initialisationPartie();
    window.show();

    return a.exec();
}
