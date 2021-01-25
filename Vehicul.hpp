#ifndef _VEHICUL_
#define _VEHICUL_

#include "Baza.hpp"

class Vehicul : public Baza
{
    char *proprietar;
    int pret;

public:
    Vehicul();
    Vehicul(const char *, int);
    virtual void afisare();
    int getPret();
    char *getProprietar();
};

#endif