#include "GuerrierLeger.h"

GuerrierLeger::GuerrierLeger()
{
    m_vie = nombreAleatoire(100, 75);
    m_arme = new Epee(55, 40);
}
