#include "Masina_cu_remorca.hpp"

int main()
{
    Baza **v = new Baza *[10];

    v[0] = new Vehicul("Marian", 1500);

    int x[3] = {1, 2, 3};
    v[1] = new Remorca(x, 500, "Ionut", 2200);

    int y[3] = {4, 5, 6};
    v[2] = new Masina(y, "BMW", "Andreea", 1200);

    int m[3] = {7, 8, 9};
    int n[3] = {10, 11, 12};
    v[3] = new Masina_cu_remorca(2500, m, "Dacia", n, 700, "Stefan", 1400);

    for (int i = 0; i < 4; i++)
    {
        v[i]->afisare();
    }

    // Sortare vector
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (((Vehicul *)v[i])->getPret() > ((Vehicul *)v[j])->getPret())
            {
                Baza *aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    cout << "\nSortare Efectuata\n\n";
    for (int i = 0; i < 4; i++)
    {
        v[i]->afisare();
    }

    Masina_cu_remorca* a =  new Masina_cu_remorca(2500, m, "Dacia", n, 700, "Stefan", 1400);
    Masina_cu_remorca* b = new Masina_cu_remorca(3500, m, "Papuc", n, 700, "Stefan", 1400);
    cout<<(a>b);
    cout<<(a<b);

    (*a+*b).afisare();
    (*a-*b).afisare();
}