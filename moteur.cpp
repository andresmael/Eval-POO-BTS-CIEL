// moteur.cpp , Andres Maël, 1.0
#include <iostream>
#include "moteur.h"



CMoteur::CMoteur(float _cylindree, int _puissance, std::string _typeCarburant, bool _enMarche, int _regime) {
    cylindree = _cylindree;
    typeCarburant = _typeCarburant;
    enMarche = _enMarche;
    regime = _regime;
}

CMoteur::~CMoteur() {}

void CMoteur::demmarer() {
    if (enMarche = false) {
        enMarche = true;
        regime = 900;
        std::cout << "Le moteur a bien démmarer";
    }
    else {
        std::cout << "Erreur le moteur est déja démmarer";
    }
}

void CMoteur::arreter() {
    if (enMarche = true) {
        enMarche = false;
        regime = 0;
        std::cout << "Le moteur c'est bien arréter";
    }
    else {
        std::cout << "Erreur le moteur est déja arréter";
    }
}

void CMoteur::accelerer(int trMin) {
    if (enMarche = true) {
        if ((regime + trMin) <= 6500) {
            regime += trMin;
        }
        else {
            regime = 6500;
        }
    }
    else {
    std::cout << "Erreur le moteur est arréter";
    }
}

void CMoteur::getPuissance() {
    if (enMarche = true) {
    std::cout << "Le régime du moteur est de"<< regime << "tr/min";
    }
    else {
    std::cout << "Le régime est de 0 tr/min";
    }
}

void CMoteur::afficher() {
    std::cout << "Le cylindre est de :" << cylindree
              << "La puissance est de :" << puissance
              << "Le type de carburant est :" << typeCarburant
              << "Le régime du moteur est de :" << regime;
    if (enMarche = true) {
        std::cout << "Le moteur est en marche"
    }          
    else {
        std::cout << "Le moteur est en éteint"
    }    
}