#include "Magicien.h"

Magicien::Magicien() : Personnage()
{
    m_vie = nombreAleatoire(110, 90);
    m_mana = nombreAleatoire(70, 50);

    m_sort = new Sort(40, 30);
    m_nom = attribuerNom();
}

void Magicien::afficherInfos()
{
    printw("Vie: %d", m_vie);
    printw("Mana: %d", m_mana);
    refresh();
}
