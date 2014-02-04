#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <curses.h>
#include "Arme.h"

class Personnage
{
    public:
        Personnage();
        std::string demanderNom();
        void bloquer();
        void recevoirDegats(int);
        void afficherInfos();
        bool estEnVie();

    protected:
        //Tout ce qui suit est protected pour des raisons
        //d'heritage

        bool m_bloquer;
        int m_vie;
        int m_mana;
        std::string m_nom;
        int nombreAleatoire(int, int);
        //Cette fonction n'a aucun interet
        //a etre publique

        Arme* m_arme; //La classe ne doit jamais etre instancie,
                      //On fera donc un new Epee ou new Sort
                      //Grace aux proprietes de l'heritage

    private:

};

#endif // PERSONNAGE_H
