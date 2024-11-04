#ifndef echantillon_tp5
#define echantillon_tp5

#include "valeur.hpp"

class Echantillon{
    private:
        std::vector<Valeur> tab;
        std::vector<Valeur>::iterator result;
        unsigned taille;

    public:
        Echantillon() {};

        unsigned getTaille() {return taille;}
        void ajouter(double r) {tab.push_back(Valeur(r));
                                taille++;}

        Valeur getValeur(int i) 
        {
            if(i >= (int)taille)
            {throw std::out_of_range("out of range");}
            return tab[i];
        }

        Valeur getMinimum() 
        {
            if (tab.empty()) {
                throw std::domain_error("Aucun élément dans l'échantillon");
            }
            result = std::min_element(tab.begin(), tab.end(), [](const Valeur & a, const Valeur & b){return a.getNombre() < b.getNombre();}); return *result;
        }

        Valeur getMaximum() {
            if (tab.empty()) {
                throw std::domain_error("Aucun élément dans l'échantillon");
            }
            result = std::max_element(tab.begin(), tab.end(), [](const Valeur & a, const Valeur & b){return a.getNombre() < b.getNombre();}); return *result;
        }


};

#endif