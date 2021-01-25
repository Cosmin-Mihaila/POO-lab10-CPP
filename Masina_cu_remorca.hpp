#include "Masina.hpp"
#include "Remorca.hpp"

class Masina_cu_remorca : public Masina, public Remorca
{
    int masa_totala; //fara incarcatura
public:
    Masina_cu_remorca();
    Masina_cu_remorca(int, int[], const char *, int[], int, const char *, int);
    void afisare();
    bool operator>(Masina_cu_remorca&);
    bool operator<(Masina_cu_remorca&);
    friend Masina_cu_remorca operator+(Masina_cu_remorca&, Masina_cu_remorca&);
    friend Masina_cu_remorca operator-(Masina_cu_remorca&, Masina_cu_remorca&);
    int getMasaTotala();
};