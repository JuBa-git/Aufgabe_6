#include <iostream>
#include "ComplexNumber.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    ComplexNumber<int> Z1 = {10,15};
    ComplexNumber<int> Z2(20,30);

    std::cout << "Die 1. komplexe Zahl besteht aus dem Realteil re = " << Z1.getre() << " und dem Imaginärteil im = "
              << Z1.getim() << std::endl;
    std::cout << "2. komplexe Zahl: re = " << Z2.getre() << " im = " << Z2.getim() << std::endl;



    ComplexNumber<double> Z3(17.34,19.12);

    std::cout << "3. komplexe Zahl: re = " << Z3.getre() << " im = " << Z3.getim() << std::endl;



    ComplexNumber<int> Z4(20,30);

    std::cout << "Z1 == Z2: " << (Z1 == Z2) << std::endl;
    std::cout << "Z1 == Z1: " << (Z1 == Z1) << std::endl;
    std::cout << "Z2 == Z4: " << (Z2 == Z4) << std::endl;



    std::cout << "Z1 + Z2 = " << (Z1 + Z2) << std::endl;
    std::cout << "Z1 - Z2 = " << (Z1 - Z2) << std::endl;
    return 0;
}
