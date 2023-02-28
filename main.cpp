#include <iostream>
inline void fun(double r, double d){
        std::cout << r*r*3.141592654 - d*d*3.141592654;
}

int main() {
    double promien, odleglosc;
    std::cin >> promien >> odleglosc;
    fun(promien, odleglosc);
}
