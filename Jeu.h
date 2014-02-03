#ifndef JEU_H
#define JEU_H

#include "curses.h"
#include "GuerrierLeger.h"
#include "GuerrierLourd.h"
#include "Magicien.h"

class GuerrierLeger;    //Forward Declarations -> Obligatoire
class GuerrierLourd;
class Magicien;


class Jeu
{
    public:
        Jeu();


    private:
        Personnage* joueur1;
        Personnage* joueur2;

};

#endif // JEU_H
