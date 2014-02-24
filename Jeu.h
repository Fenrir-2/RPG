#ifndef  JEU_H
#define  JEU_H

#include "GuerrierLeger.h"
#include "GuerrierLourd.h"
#include "Magicien.h"
#include <curses.h>

class GuerrierLeger;
class GuerrierLourd;
class Mage;

class Jeu
{

    public:
        Jeu();
        Personnage* menu();


    private:
        Personnage* joueur1;
        Personnage* joueur2;
};

#endif // JEU_H
