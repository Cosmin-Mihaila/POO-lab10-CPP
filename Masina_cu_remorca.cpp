#include "Masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca() : Vehicul(), Remorca(), Masina(), masa_totala(0) {}

Masina_cu_remorca::Masina_cu_remorca(int masa_totala, int dimensiuniM[], const char *marca, int dimensiuniR[], int greutate_maxima, const char *proprietar, int pret) : Vehicul(proprietar, pret), Remorca(dimensiuniR, greutate_maxima, proprietar, pret), Masina(dimensiuniM, marca, proprietar, pret),
                                                                                                                                                                        masa_totala(masa_totala) {}

void Masina_cu_remorca::afisare()
{
    int *dimensiuniM = this->getDimensiuniM();
    int *dimensiuniR = this->getDimensiuniR();
    cout << "Masina_cu_remorca {masa_totala: " << getMasaTotala();
    cout << "; dimeunsiuniM: (";
    for (int i = 0; i < 3; i++)
    {
        cout << dimensiuniM[i];
        if (i != 2)
        {
            cout << ", ";
        }
    }
    cout << "); marca: " << getMarca();
    cout << "; dimensiuniR: (";
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

int Masina_cu_remorca::getMasaTotala()
{
    return masa_totala;
}

bool Masina_cu_remorca::operator>(Masina_cu_remorca& obj){
    return this->getMasaTotala() > obj.getMasaTotala();
}

bool Masina_cu_remorca::operator<(Masina_cu_remorca& obj){
    return this->getMasaTotala() > obj.getMasaTotala();
}

Masina_cu_remorca operator+(Masina_cu_remorca& a, Masina_cu_remorca& b){
    Masina_cu_remorca aux;
    aux.masa_totala = a.getMasaTotala() + b.getMasaTotala();
    return aux;
}

Masina_cu_remorca operator-(Masina_cu_remorca& a, Masina_cu_remorca& b){
    Masina_cu_remorca aux;
    aux.masa_totala = a.getMasaTotala() - b.getMasaTotala();
    return aux;
}