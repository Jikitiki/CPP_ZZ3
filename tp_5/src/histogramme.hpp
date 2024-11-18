#ifndef histogramme_tp5
#define histogramme_tp5

#include "valeur.hpp"
#include "echantillon.hpp"
#include "classe.hpp"
#include <iostream>
#include <set>



class Histo{
    private:
        std::set<Classe> tab;

    public:
        Histo(double borneInf, double borneSup, int nbClasses)
        {
            double tmp = (borneSup-borneInf)/nbClasses;
            for(int i=0; i<nbClasses; i++)
            {
                tab.insert(Classe(borneInf+i*tmp, borneInf+(i+1)*tmp, 0));
            }
        }

        std::set<Classe> getClasses(){return tab;}

        void ajouter(Echantillon e)
        {
            for (unsigned i = 0; i<e.getTaille(); i++)
            {
                Valeur V = e.getValeur(i);
                typename std::set<Classe>::iterator it = std::find_if(tab.begin(), tab.end(), [V](Classe c)
                                                                                        {return V.getNombre() >= c.getBorneInf() && V.getNombre() < c.getBorneSup();});
                Classe c = *it;
                tab.erase(it);
                c.ajouter();
                tab.insert(c);
            } 


        }

};

#endif