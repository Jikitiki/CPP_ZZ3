#ifndef Classe_tp5
#define Classe_tp5

class Classe{
    private:
        double bornesInf;
        double bornesSup;
        unsigned quantite;
    public:
        Classe(){}
        Classe(double a, double b){bornesInf = a; bornesSup = b;}
        Classe(double a, double b, unsigned q){bornesInf = a; bornesSup = b; quantite = q;}

        double getBorneInf() const {return bornesInf;}
        double getBorneSup() const {return bornesSup;}
        unsigned getQuantite() const {return quantite;}

        void setBorneInf(double d){bornesInf = d;}
        void setBorneSup(double d){bornesSup = d;}
        void setQuantite(double d){quantite = d;}

        void ajouter(){quantite++;}


};


bool operator<(const Classe& a, const Classe& b)
{
    return a.getBorneInf() < b.getBorneInf();
}

#endif