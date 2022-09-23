#include <iostream>

int doubleNumber(int x)
{
    std::cin >> x;
    return x * 2; 
}

int main()
{
    int x;
    std::cout << "Ingrese un numero: \n";
    std::cout << doubleNumber(x);

    return 0;  
}