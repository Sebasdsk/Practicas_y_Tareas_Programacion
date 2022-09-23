// Esta funcion no toma parametros
// No depende de la persona que llama para nada
void doPrint ()
{
    std:: cout << "En doPrint() \n"; 
}

// Esta funcion toma un parametro entero llamado x
// La persona que llama proporcionara el valor de x
void printValue(int x)
{
    std::cout<< x << '\n';
}

// Esta funcion tiene dos parametros enteros, uno llamado x y otro llamado y
// La persona que llama proporcionara el valor tanto de x como de y
int add (int x, int y)
{
    return x + y;
}