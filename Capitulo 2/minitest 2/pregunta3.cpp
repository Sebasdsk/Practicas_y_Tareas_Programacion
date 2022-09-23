#include <iostream>

int add(int x, int y, int z)
{
    return x + y + z;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << multiply(add(1,2,3),4) << '\n';
    return 0;
}

// da el resultado de la funcion multiply pero primero llamando a la funcion add que hace la suma de 1, 2 y 3 que en total da 6 
//luego lo multiplica con 4 que es otro argumento dando como resultado 24
