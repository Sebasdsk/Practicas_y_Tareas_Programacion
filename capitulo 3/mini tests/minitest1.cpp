#include <iostream>

int LeerNum(int x)
{
    std::cout << "Por favor ingrese un numero: ";
    std::cin >> x;
    return x;
}

void escribirRespuesta(int x)
{
    std::cout << "La suma es: " << x;
}

int main()
{
    int x{0};
    x = (LeerNum(x) + LeerNum(x));
    escribirRespuesta(x);

    return 0;
}