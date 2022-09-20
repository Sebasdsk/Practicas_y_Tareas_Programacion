#include <iostream>

//void siginifica que la funcion no devuelve un valor a la persona que llama
void retornoNada()
{
    std::cout << "Hola "<< '\n';
    //Esta funcion no devuelve un valor, por lo que no se necesita una declaracion de devolucion
}

int main()
{
    retornoNada(); //bien: se llama a la funcion returnNothing (), no se devuelve ningun valor
    //std::cout << retornoNada(); error: esta linea no se compilara. Debera comentarlo para continuar.
    return 0;
}