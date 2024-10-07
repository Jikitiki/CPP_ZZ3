#include "polaire.hpp"
#include "cartesien.hpp"
#include <sstream>
#include <math.h>

Polaire::Polaire()
{
    this->distance = 0;
    this->angle = 0;
}

Polaire::Polaire(const Cartesien & car)
{
    car.convertir(*this);
}

Polaire::Polaire(double ang, double dist)
{
    this->distance = dist;
    this->angle = ang;
}

void Polaire::afficher(std::stringstream& flux) const
{
    flux << "(a=" << angle << ";d=" << distance << ")"; 
    //"(a=12;d=24)"
}

double Polaire::getAngle() const
{
    return angle;
}

double Polaire::getDistance() const
{
    return distance;
}

void Polaire::setAngle(double angle)
{
    this->angle = angle;
}

void Polaire::setDistance(double distance)
{
    this->distance = distance;
}

void Polaire::convertir(Cartesien & car) const
{
    car.setX(distance * std::cos(angle * M_PI / 180));
    car.setY(distance * std::sin(angle * M_PI / 180));
}

void Polaire::convertir(Polaire & pol) const 
{
    pol.setAngle(angle);
    pol.setDistance(distance);
}