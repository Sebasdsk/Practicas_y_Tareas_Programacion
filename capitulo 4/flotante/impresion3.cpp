#include <iostream>
#include <iomanip> //para std::setprecision ()


int main()
{
    std::cout << std::setprecision (16); //muestra 16 digitos de precision
    std::cout << 3.33333333333333333333333333333f << '\n'; //sufijo significa float 
    std::cout << 3.333333333333333333333333333333 << '\n'; //sin sufijo significa doble
    return 0;
}