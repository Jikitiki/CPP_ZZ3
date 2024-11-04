#ifndef histogramme_tp5
#define histogramme_tp5

#include "valeur.hpp"
#include "echantillon.hpp"
#include "classe.hpp"


class Histo{
    private:
        std::vector<Classe> tab;

    public:
        Histo(double borneInf, double borneSup, int nbClasses)
        {
            double tmp = (borneSup-borneInf)/nbClasses;
            for(int i=0; i<nbClasses; i++)
            {
                tab.push_back(Classe(borneInf+i*tmp, borneSup+i*tmp));
            }
        }

        std::vector<Classe> getClasses(){return tab;}

};

#endif