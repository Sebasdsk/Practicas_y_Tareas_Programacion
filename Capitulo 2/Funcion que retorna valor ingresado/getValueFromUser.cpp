#include <iostream>

int getValueFromUser() //Esta funcion ahora devuelve un valor entero
{
    std::cout << "Ingrese un entero: ";
    int input{};
    std::cin >> input;

    return input; //devuelve el valor que el usuario ingreso
}

int main()
{
    int num{getValueFromUser()}; //inicia num con el valor de retorno de getValueFromUser ()
    std::cout << num << " duplicado es: " << num * 2 << '\n';
    return 0;
}