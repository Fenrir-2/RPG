#include "Personnage.h"

Personnage::Personnage()
{
    m_nom = attribuerNom();
    m_vie = 0;
    m_mana = 0;
    m_bloquer = false;
}

void Personnage::afficherInfos()
{
    printw("Nom: %s\n", m_nom.c_str());
    printw("Vie: %d\n",  m_vie);
    refresh(); //<- Never forget that fuckin' shit!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

std::string Personnage::attribuerNom()
{
    std::string nomPerso = "";

    int retourNom = nombreAleatoire(5,1);

    switch(retourNom)
    {
        case 1:
            nomPerso = "Alduin";
        break;

        case 2:
            nomPerso = "Dovahkiin";
        break;

        case 3:
            nomPerso = "Proud Blacknight";
        break;

        case 4:
            nomPerso = "Volgarr";
        break;

        case 5:
            nomPerso = "Coward Faggot";
        break;

        default:
            nomPerso = "Failure during name attribution";
        break;
    }

    return nomPerso;
}

int Personnage::nombreAleatoire(int max, int min)
{
    if(max < min)
    {
        int i = max;
        max = min;
        min = i;
    }
    //Ce if évite de se planter dans les paramètres.

    int nombreRenvoye = (rand() % (max - min + 1)) + min;

    return nombreRenvoye;
}
//Ma petite fonction pour les nombres aléatoires

void Personnage::bloquer()
{
    m_bloquer = false; //Au cas-où...

    m_bloquer = true;
}
//Plutôt simple

void Personnage::recevoirDegats(int degats)
{
    if(m_bloquer == true)
    {
        int i = nombreAleatoire(degats-2, 5);
        degats -= i;
    }

    m_vie -= degats;
    estEnVie();
}

bool Personnage::estEnVie()
{
    bool retour = NULL;

    if(m_vie > 0)
    {
        retour = true;
    }

    else if(m_vie <= 0)
    {
        m_vie = 0;
        retour = false;
    }

    return retour;
}


