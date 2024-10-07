#ifndef NUAGE_TP1
#define NUAGE_TP1

#include <vector>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

template <typename T>
class Nuage;

template <typename T>
T barycentre_v1(Nuage<T> n);

template <typename T>
class Nuage{

    private:
        std::vector<T> vp;

    public:
        int size() const;
        void ajouter(const T & p);

    typedef typename std::vector<T>::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;

    friend T barycentre_v1<T>(Nuage<T> n);

};

template <typename T>
int Nuage<T>::size() const
{
    return vp.size();
}

template <typename T>
void Nuage<T>::ajouter(const T & p)
{
    vp.push_back(p);
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::begin() const
{
    return vp.begin();
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::end() const
 {
    return vp.end();
 }

template <typename T>
T barycentre_v1(Nuage<T> n)
{
    double moyX = 0;
    double moyY = 0;

    for(int i = 0; i<n.size(); i++)
    {
        Cartesien tmp(0,0);
        n.vp[i].convertir(tmp);

        moyX += tmp.getX();
        moyY += tmp.getY();
    }

    if(n.size() != 0)
    {
        moyX /= n.size();
        moyY /= n.size();
    }
    Cartesien bar(moyX, moyY);

    return bar;
}

template <>
Polaire barycentre_v1<Polaire>(Nuage<Polaire> n)
{
    double moyX = 0;
    double moyY = 0;

    for(int i = 0; i<n.size(); i++)
    {
        moyX += n.vp[i].getAngle();
        moyY += n.vp[i].getDistance();
    }

    if(n.size() != 0)
    {
        moyX /= n.size();
        moyY /= n.size();
    }
    Polaire bar(moyX, moyY);

    return bar;
}



#endif