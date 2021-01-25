#include "Vehicul.hpp"

class Masina : virtual public Vehicul
{
    int dimensiuni[3]; //lungime, latime si inaltime
    char *marca;

public:
    Masina();
    Masina(int[], const char *, const char *, int);
    virtual void afisare();
    int *getDimensiuniM();
    char *getMarca();
};