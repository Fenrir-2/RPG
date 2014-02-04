#ifndef OBJET_H
#define OBJET_H

/*
******************************************
*                                        *
*   Ne JAMAIS instancier cette classe    *
*                                        *
******************************************
*/

#include <cstdlib>
#include <ctime>
//Utile pour la fonction nombreAleatoire(int, int)

#include <curses.h>

class Objet
{
    public:
        Objet();

    protected:
        int m_poids;
        int m_placesPrises;
        int m_numeroIndex;

        int nombreAleatoire(int, int);

}; //<- Never forget this crap!

#endif // OBJET_H
