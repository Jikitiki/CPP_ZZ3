#ifndef NUAGE_TP1
#define NUAGE_TP1

#include <vector>
#include "point.hpp"

class Nuage{

    private:
        std::vector<Point *> vp;

    public:
        int size() const;
        void ajouter(Point & p);

};


#endif