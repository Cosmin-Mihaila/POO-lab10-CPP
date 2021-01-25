#include "Vehicul.hpp"

class Remorca : virtual public Vehicul
{
    int dimensiuni[3]; //lungime, latime si inaltime
    int greutate_maxima;

public:
    Remorca();
    Remorca(int[], int, const char *, int);
    virtual void afisare();
    int *getDimensiuniR();
    int getGreutateMaxima();
};