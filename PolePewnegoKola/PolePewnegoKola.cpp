//
// Created by bartek on 2/28/23.
//
#include <iostream>
#include "PolePewnegoKola.h"
void PolePewnegoKola::polePewnegoKola(double r, double d){
    d/=2;
    std::cout << r*r*3.141592654 - d*d*3.141592654;
}
