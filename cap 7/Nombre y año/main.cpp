#include <iostream>
#include <limits>

int main()
{
    std::string nombre;
    int edad;
    float tiempoVida;
    
    std::cout << "Ingrese su nombre completo: ";
    getline(std::cin, nombre);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Introduzca su edad: ";
    std::cin >> edad;

    tiempoVida = (edad/nombre.length());

    std::cout << "Por cada letra ingresada le agregan  " << tiempoVida << " años de vida \n";

    return 0;
}