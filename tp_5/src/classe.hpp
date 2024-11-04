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

        double getBorneInf(){return bornesInf;}
        double getBorneSup(){return bornesSup;}
        unsigned getQuantite(){return quantite;}

        void setBorneInf(double d){bornesInf = d;}
        void setBorneSup(double d){bornesSup = d;}
        void setQuantite(double d){quantite = d;}

        void ajouter(){quantite++;}

};

#endif