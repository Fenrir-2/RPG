#include "Objet.h"

Objet::Objet()
{
    m_poids = 0;
    m_numeroIndex = 0;
    m_placesPrises = 0;

    //Cet classe ne doit jamais etre instancie mais bon...
}

int Objet::nombreAleatoire(int max, int min)
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
