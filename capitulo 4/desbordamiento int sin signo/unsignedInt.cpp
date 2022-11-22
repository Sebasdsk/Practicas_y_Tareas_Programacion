#include <iostream>

int main()
{
    unsigned short x {65535}; //mayor posible para un entero sin signo de 16 bits
    std::cout << "x era " << x <<'\n';
    
    x = 65536;
    std::cout << "x es ahora " << x << '\n';

    x= 65537;
    std::cout << "x es ahora " << x  << '\n';

    x= -1;
    std::cout << "x es ahora " << x << '\n';
}
//cambian los valores de 65536 a 0 y de 65537 a 1 
//lo que pienso es que se van recorriendo