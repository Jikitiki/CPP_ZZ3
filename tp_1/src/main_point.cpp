#include <cstdlib>
#include <vector>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

int main() {

    std::vector<Point *> vp;

    Cartesien car;
    Polaire pol;

    vp.push_back(&car);
    vp.push_back(&pol);



 return EXIT_SUCCESS;
}
