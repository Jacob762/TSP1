//
// Created by jakub on 5/5/2023.
//

#ifndef SDIZOPROJEKT2_GRAF_H
#define SDIZOPROJEKT2_GRAF_H
#include <string>
#include <iostream>
#include "../Tablica/tablica.h"
#include "../TablicaI/tablicaI.h"

// nie da sie includowac dwoch list roznych niewiadomo czemu XD

using namespace std;

class Graf {
private:
    int *koszt;
    int *poprzednik;
    int rozmiar; // ilosc wierzcholkow
    int wierz; // ilosc krawedzi tak naprawde
    int **temp;
    void dodajMacierz(string nazwa);
public:
    Graf(int size);
    Graf();
    Graf(string nazwa);
    void pokaz();
    int **grafMacierz;
    int getRozmiar();

    void wygeneruj(int size);
};



#endif //SDIZOPROJEKT2_GRAF_H