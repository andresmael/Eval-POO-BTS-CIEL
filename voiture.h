// voiture.h, fichier de la classe voiture , Andres Maël, 2.0
#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include "moteur.h"
#include "roue.h"

class Cvoiture
{
private:
    std::string carburant;  // Type de carburant
    std::string marque;     // Marque de la voiture
    std::string modele;     // Modele de la voiture
    int puissance;          // Puissance de la voiture
    int vitesse;            // Vitesse de la voiture

    CRoue Roues[4];         // Tableau contenant les 4 roues
    CMoteur moteur;

public:
    Cvoiture(CMoteur moteur, std::string ma, std::string mo,);

    void accelerer(int v);
    void afficher();
    void arreter();
    void demarrer();
    void ralentir(int v);
    void afficherRoues();
};

#endif