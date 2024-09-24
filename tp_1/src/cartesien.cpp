#include "cartesien.hpp"
#include <sstream>
#include "polaire.hpp"
#include <math.h>

Cartesien::Cartesien()
{
    this->x = 0;
    this->y = 0;
}

Cartesien::Cartesien(const Polaire & pol)
{
    pol.convertir(*this);
}

Cartesien::Cartesien(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Cartesien::afficher(std::stringstream& flux) const
{
    flux << "(x=" << this->x << ";y=" << this->y << ")"; 
}

double Cartesien::getX() const
{
    return x;
}

double Cartesien::getY() const
{
    return y;
} 

void Cartesien::setX(double x)
{
    this->x = x;
}

void Cartesien::setY(double y)
{
    this->y = y;
}

void Cartesien::convertir(Polaire & pol) const
{
    double tmp = std::atan2(y, x) * 180 / M_PI;
    pol.setAngle(tmp);
    tmp = std::hypot(x, y);
    pol.setDistance(tmp);
}

void Cartesien::convertir(Cartesien & car) const 
{
    car.setX(x);
    car.setY(y);
}