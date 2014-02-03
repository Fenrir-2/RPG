#ifndef EPEE_H
#define EPEE_H

#include "Arme.h"

class Epee : public Arme
{
    public:
        Epee();
        Epee(int, int);
        bool reinit();

    private:

        int m_minDegtFourni;
        int m_maxDegtFourni;

};


#endif // EPEE_H
