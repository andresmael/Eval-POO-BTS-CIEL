// roue.h, fichier de la classe roue , Andres Maël, 1.0
#ifndef ROUE_H
#define ROUE_H

#include <string>

class CRoue
{
private:
    int dimension;
    std::string marque;
    float pression;

public:
    CRoue();
    CRoue(int d, std::string ma, float p);
    ~CRoue();

    void afficher();
    void crever();
    void degonfler();
    void gonfler();
};

#endif