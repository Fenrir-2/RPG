#include "Personnage.h"

Personnage::Personnage()
{
    m_nom = demanderNom();
    m_vie = 0;
    m_mana = 0;
    m_bloquer = false;

}

void Personnage::afficherInfos()
{
    printw("Nom: %s\n", m_nom.c_str());
    printw("Vie: %d\n",  m_vie);

}

std::string Personnage::demanderNom()
{
    std::string nomEntre;
    printw("Entrez le nom du joueur: \n");
    refresh();
    std::getline(std::cin, nomEntre);

    return nomEntre;
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

    //srand(time(NULL));

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


