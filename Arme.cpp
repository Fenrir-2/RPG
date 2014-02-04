#include "Arme.h"

Arme::Arme() : Objet()
{
    m_degats = 0;
    m_nom = attribuerNom();
}
//Cette classe ne doit JAMAIS etre instancie


std::string Arme::attribuerNom()
{
    std::string retourNom = "";
    int retourNomEpee = nombreAleatoire(6,1);
    switch(retourNomEpee)
    {
        case 1:
            retourNom = "Master Sword";
        break;

        case 2:
            retourNom = "Tranch'Bite";
        break;

        case 3:
            retourNom = "Diamond Sword";
        break;

        case 4:
            retourNom = "Heaven's Sword of Hell";
        break;

        case 5:
            retourNom = "Hearth Destroyer";
        break;

        case 6:
            retourNom = "Head Hunter";
        break;

        default:
            retourNom = "Arme name attribution malfunction";
        break;
    }

    return retourNom;
}
//Aise a comprendre

void Arme::afficherInfos()
{
    printw("Nom : %s \n", m_nom.c_str());
    printw("Degats : %d \n", m_degats);
    refresh();
    //^
    //|
    //Never forget this crap!
}

int Arme::getDegats()
{
    return m_degats;
}
//Serieux? Besoin d'expliquer ca?
