#ifndef ARME_H
#define ARME_H

/*
******************************************
*                                        *
*   Ne JAMAIS instancier cette classe    *
*                                        *
******************************************
*/

#include "Objet.h"
#include <string>

class Arme : public Objet
{
    public:
        Arme();
        int getDegats();

    protected:
        int m_degats;
        std::string m_nom;

        std::string attribuerNom();
        void afficherInfos();

};//<- Never forget this crap!

#endif // ARME_H
