#include "nuage.hpp"

int Nuage::size() const
{
    return vp.size();
}

void Nuage::ajouter(Point & p)
{
    vp.push_back(&p);
}

Nuage::const_iterator Nuage::begin() const
{
    return vp.begin();
}

Nuage::const_iterator Nuage::end() const
 {
    return vp.end();
 }

