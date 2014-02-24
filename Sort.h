#ifndef SORT_H
#define SORT_H

#include "Arme.h"

class Sort : public Arme
{
    public:
        Sort();
        Sort(int, int);

    protected:
        void afficherInfos();

    private:
        std::string attribuerNom();

};

#endif // SORT_H
