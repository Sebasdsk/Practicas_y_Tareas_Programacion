#include <iostream>

int getInteger()
{
    std::cout << "Ingrese un entero: ";
    int x{};
    std::cin >> x;
    return x;
}