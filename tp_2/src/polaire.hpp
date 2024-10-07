#ifndef POLAIRE_TP1
#define POLAIRE_TP1

#include "point.hpp"
#include <iostream>
//#include "cartesien.hpp"

class Polaire : public Point{

    private:
        double distance;
        double angle;

    public:
        Polaire(double ang, double dist);
        Polaire(const Cartesien & car);
        Polaire();

        double getAngle() const;
        double getDistance() const;
        void setAngle(double angle);
        void setDistance(double distance);
        void afficher(std::stringstream& flux) const override;
        void convertir(Cartesien & car) const override;
        void convertir(Polaire & pol) const override;

};

#endif