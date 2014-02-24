#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <curses.h>

#define MAJOR_VERSION 0
#define MINOR_VERSION 2   //Avant de changer de version, changer aussi le titre dans afficherInfos()!
#define COMP_DAY 23      //Jour de la compilation
#define COMP_MONTH 12   //Mois de la compilation
#define COMP_YEAR 2013 //Ann�e de la compilation
                      //Tout les define necessaire pour afficherInfos()

void initCurses();
void afficherInfos();

#endif // MAIN_H

