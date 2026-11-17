// testmoteur.cpp , Andres Maël, 1.0
#include "moteur.h"
#include <iostream>

int main() {
    CMoteur m1();
    m1.afficher();
    CMoteur m2(2.0, 150, "Diesel");
    m2.accelerer(2000);
    m2.afficher();
    m2.demmarer();
    m2.demmarer();
    m2.accelerer(2500);
    m2.afficher();
    m2.accelerer(5000);
    m2.afficher();
    m2.arreter();
    m2.afficher();
}