#include <iostream>

int getValueFromUser()
{
    std :: cout << "Ingrese un numero entero: ";
    int input{};
    std :: cin >> input;

    return input;
}

int main()
{
    int x{getValueFromUser()};//primera llamada de la funcion obtener resultado del usuario
    int y{getValueFromUser()};//segunda llamada de la funcion obtener resultado del usuario

    std :: cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}