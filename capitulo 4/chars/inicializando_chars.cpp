#include <iostream>

int main()
{
    char ch2{ 'a'}; //Inicializar con el punto de codigo para 'a' (almacenado como entero 97) (preferido)
    char ch1{ 97 }; //Inicializar con el entero 97 ('a')(no preferido)

    char ch3{5}; //Inicializar con un entero 5 (almacenado como un entero 5)
    char ch4{'5'}; //Inicializar con el punto de codigo para '5' (almacenado como entero 53)

    return 0;
}