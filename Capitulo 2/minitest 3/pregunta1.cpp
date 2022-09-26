#include <iostream>

void doIt(int x)
{
    int y {4};
    std::cout<<"doIt: x = " << x << " y = " << y << '\n';
    x = 3;
    std::cout<<"doIt: x = "<< x << " y = " << y << '\n';
}

int main()
{
    int x {1};
    int y {2};
    std::cout<<"Principal: x = "<< x << " y = " << y << '\n';
    doIt(x);
    std::cout<<"Principal: x = "<< x << " y = " << y << '\n';
     
    return 0;
}
// se imprimen los valores ya establecidos en sus respectivas lineas, en principal se imprimen el 1 y 2, y en doIt primero se imprime el valor del main
// y dentro de la funcion doIt se le establece el valor 3 a x, y la impresion de principal sigue siendo la misma
