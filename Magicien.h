#ifndef MAGICIEN_H
#define MAGICIEN_H

#include "Personnage.h"
#include "Sort.h"

class Magicien : public Personnage
{
    public:
        Magicien();

    protected:
        int m_mana;
        Sort* m_sort;

    private:


};

#endif // MAGICIEN_H
