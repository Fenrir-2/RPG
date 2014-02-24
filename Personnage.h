#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <cstdlib>
#include <ctime>
#include <curses.h>
#include <iostream>
#include "Arme.h"

class Personnage
{
    public:
        Personnage();
        std::string attribuerNom();
        void bloquer();
        void recevoirDegats(int);
        void afficherInfos();
        bool estEnVie();

    protected:
        bool m_bloquer;
        int m_vie;
        int m_mana;
        std::string m_nom;
        int nombreAleatoire(int, int);

        Arme* m_arme;

    private:

};

#endif // PERSONNAGE_H
