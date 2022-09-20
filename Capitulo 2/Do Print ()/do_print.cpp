#include <iostream> //Para std :: cout

// Definicion de la funcion definida por el usuario doPrint()
void doPrint() //doPrint () es la funcion llamada en este ejemplo
{
    std :: cout << "En doPrint () \n";
}

//Definicion de la funcion main ()
int main()
{
    std :: cout << "Iniciando Main () \n ";
    doPrint(); //Interrumpe main () haciendo una llamada de funcion a doPrint (). main() es la persona que llama.
    doPrint(); // Se pueden llamar mas de una vez, aqui la llame por segunda vez la funcion doPrint ()
    std :: cout << "Finalizando Main () \n"; //esta sentencia se ejecuta despues de que termine doPrint ()

    return 0;
}
