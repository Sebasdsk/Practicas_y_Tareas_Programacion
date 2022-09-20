#include<iostream>

//Int es un tipo de retorno
//Un tipo de retorno de int significa que la funcion devolvera algun valor entero a la persona que llama
int returnfive()
{
    // la declaracion de retorno indica el valor especifico que se devolvera
    return 5; // Se devuelve el valor especifico 5 a la persona que llama
}

int main()
{
    std :: cout << returnfive() << '\n'; //Imprime 5
    std :: cout << returnfive() + 2 << '\n'; //Imprime 7
    returnfive(); //bien: se devuelve el valor 5, pero se ignora ya que main () no hace nada con el
    std :: cout << returnfive();
    return 0;
}