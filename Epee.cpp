#include "Epee.h"

Epee::Epee()
{
    m_degats = nombreAleatoire(100, 1);
    m_poids = nombreAleatoire(15, 5);

    m_maxDegtFourni = 0;
    m_minDegtFourni = 0;
    //Ces 2 int servent pour reinit les stats

    //m_nom deja initialise
}

Epee::Epee(int maxDegats, int minDegats)
{
    if(maxDegats <= 0)
    {
        maxDegats = 95;
    }

    if(minDegats <= 0)
    {
        minDegats = 1;
    }
    m_degats = nombreAleatoire(maxDegats, minDegats);
    m_poids = nombreAleatoire(15, 5);

    m_maxDegtFourni = maxDegats;
    m_minDegtFourni = minDegats;
}

bool Epee::reinit()
{
    if(m_maxDegtFourni > 0 && m_minDegtFourni > 0)
    {
            m_degats = nombreAleatoire(m_maxDegtFourni, m_minDegtFourni);
    }

    else
    {
        m_degats = nombreAleatoire(100, 1);
    }

    m_poids = nombreAleatoire(15, 5);

    return true;
}


