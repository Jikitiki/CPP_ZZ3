#ifndef POINT_TP1
#define POINT_TP1

#include <iostream>
#include <sstream>

class Polaire;
class Cartesien;

class Point {


    public:
        virtual void afficher(std::stringstream&) const = 0;
        virtual void convertir(Polaire & pol) const = 0;
        virtual void convertir(Cartesien & car) const = 0;

};


std::stringstream& operator << (std::stringstream& flux, const Point& p);


#endif