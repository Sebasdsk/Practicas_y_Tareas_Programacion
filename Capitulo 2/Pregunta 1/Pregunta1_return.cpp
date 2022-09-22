#include <iostream>

/*Programa que suma los retornos de las funciones 
En este programa su sumo el 7 y 9 dando como resultado 16
*/


int return7()
{
    return 7;
}

int return9()
{
    return 9;
}

int main()
{
    std :: cout << return7() + return9() << '\n';

    return 0;
}
