#include "Masina.hpp"

Masina::Masina() : Vehicul(), dimensiuni{}, marca(NULL) {}

Masina::Masina(int dimensiuni[], const char *marca, const char *proprietar, int pret) : Vehicul(proprietar, pret)
{
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = dimensiuni[i];
    }

    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
}

void Masina::afisare()
{
    int *dimensiuniM = this->getDimensiuniM();
    cout << "Masina {dimensiuni: (";
    for (int i = 0; i < 3; i++)
    {
        cout << dimensiuniM[i];
        if (i != 2)
        {
            cout << ", ";
        }
    }

    cout << "); marca: " << getMarca();
    cout << "; pret: " << getPret();
    cout << "; proprietar: " << getProprietar();
    cout << "}\n";
}

int *Masina::getDimensiuniM()
{
    return dimensiuni;
}

char *Masina::getMarca()
{
    return marca;
}