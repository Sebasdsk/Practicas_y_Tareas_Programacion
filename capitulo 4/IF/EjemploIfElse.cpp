#include <iostream>

int main()
{
    std::cout << "ingrese un entero: ";
    int x{};
    std::cin >> x;

    if (x == 0)
        std::cout << "El valor es cero \n";
    if (x != 0)
        std::cout << "EL valor no es cero :( \n ";

    return 0;

}