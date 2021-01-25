#include "Remorca.hpp"

Remorca::Remorca() : Vehicul(), dimensiuni{}, greutate_maxima(0) {}

Remorca::Remorca(int dimensiuni[], int greutate_maxima, const char *proprietar, int pret) : Vehicul(proprietar, pret), greutate_maxima(greutate_maxima)
{
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = dimensiuni[i];
    }
}

void Remorca::afisare()
{
    int *dimensiuniR = this->getDimensiuniR();
    cout << "Remorca {dimensiuni: (";
    for (int i = 0; i < 3; i++)
    {
        cout << dimensiuniR[i];
        if (i != 2)
        {
            cout << ", ";
        }
    }

    cout << "); greutate_maxima: " << getGreutateMaxima();
    cout << "; pret: " << getPret();
    cout << "; proprietar: " << getProprietar();
    cout << "}\n";
}

int *Remorca::getDimensiuniR()
{
    return dimensiuni;
}

int Remorca::getGreutateMaxima()
{
    return greutate_maxima;
}