#include "Magicien.h"

Magicien::Magicien() : Personnage()
{
    m_vie = nombreAleatoire(110, 90);
    m_mana = nombreAleatoire(70, 50);

    m_sort = new Sort();
}
