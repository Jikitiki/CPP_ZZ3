#ifndef CARTESIEN_TP1
#define CARTESIEN_TP1

#include "point.hpp"
//#include "polaire.hpp"

class Cartesien : public Point{
    private:
        double x;
        double y;

    public:
        Cartesien();
        Cartesien(const Polaire & pol);
        Cartesien(double x, double y);
        double getX() const; 
        double getY() const;
        void setX(double x);
        void setY(double y);
        void convertir(Polaire & pol) const override;
        void convertir(Cartesien & car) const override;


        void afficher(std::stringstream& flux) const override;
 

};

#endif