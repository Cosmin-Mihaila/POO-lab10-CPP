#include "Vehicul.hpp"

Vehicul::Vehicul() : proprietar(NULL), pret(0) {}

Vehicul::Vehicul(const char *proprietar, int pret) : pret(pret)
{
    this->proprietar = new char[strlen(proprietar) + 1];
    strcpy(this->proprietar, proprietar);
}

void Vehicul::afisare()
{
    cout << "Vehicul {pret: ";
    cout << getPret();
    cout << "; proprietar: ";
    cout << getProprietar();
    cout << "}\n";
}

int Vehicul::getPret()
{
    return pret;
}

char *Vehicul::getProprietar()
{
    return proprietar;
}