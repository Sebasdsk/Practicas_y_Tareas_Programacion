#include <iostream>

int main()
{
    int num{0};
    bool primo = true;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            primo = false;
        }
    }
    
    if(num <= 1)
    {
        std::cout << "El numero no es primo";
    }
    else if(primo == true)
    {
        std::cout << "El numero es primo";
    }
    else
    {
        std::cout << "El numero no es primo";
    }
    
    return 0;
}