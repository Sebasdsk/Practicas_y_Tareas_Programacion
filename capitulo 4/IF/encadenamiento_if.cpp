#include <iostream>

int main()
{
    std::cout << "Ingrese un entero: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "El valor es positivo\n";
    else if(x < 0)
        std::cout << "El valor es negativo\n";
    else
        std::cout << "El valor es cero\n";
    
    return 0;
}


