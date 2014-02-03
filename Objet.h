#ifndef OBJET_H
#define OBJET_H

#include <cstdlib>
#include <ctime>
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
    private:


}; //<- Never forget this crap!

#endif // OBJET_H
