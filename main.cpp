#include <iostream>
#include "PolePewnegoKola.h"
int main() {
    std::cout << "Pole Pewnego Kola";
    double promien, odleglosc;
    std::cin >> promien >> odleglosc;
    PolePewnegoKola::polePewnegoKola(promien, odleglosc);
}
