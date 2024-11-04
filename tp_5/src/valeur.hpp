#ifndef valeur_tp5
#define valeur_tp5


class Valeur {
    private:
        double reel;

    public:
        Valeur() {};
        Valeur(double r) {reel = r;}

        double getNombre() const {return reel;}

        void setNombre(double r) {reel = r;}
};

#endif