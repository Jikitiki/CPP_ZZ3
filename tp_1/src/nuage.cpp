#include "nuage.hpp"

int Nuage::size() const
{
    return vp.size();
}

void Nuage::ajouter(Point & p)
{
    vp.push_back(&p);
}

