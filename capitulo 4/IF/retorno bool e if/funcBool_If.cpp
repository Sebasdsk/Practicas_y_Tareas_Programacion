#include <iostream>

bool isEqual(int x, int y)
{
    return (x == y);
}

int main()
{
    std::cout << "Ingresar un entero: ";
    int x{};
    std::cin >> x;

    std::cout << "Ingrese otro entero: ";
    int y {};
    std::cin >> y;

    if(isEqual(x,y))
        std::cout << x << " y " << y << "Son iguales\n";
    else
        std::cout << x << " y " << y << "no son iguales\n";
    
    return 0;
}
