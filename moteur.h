// moteur.h , Andres Maël, 1.0
#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

class CMoteur
{
private:
    float cylindree;
    int puissance;
    std::string typeCarburant;
    bool enMarche;
    int regime;

public:
    CMoteur(1.2, 75, "Essence", false, 0);
    CMoteur(float cyl, int puiss, std::string carb);
    ~CMoteur();

    void demmarer();
    void arreter();
    void accelerer(int trMin);
    int getPuissance();
    void afficher();
};

#endif