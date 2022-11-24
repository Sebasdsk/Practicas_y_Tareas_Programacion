#include <iostream>
#include <iomanip>

int main()
{
    float f{12345689.0f }; // f tiene 10 digitos significativo
    std::cout << std::setprecision(9); //se establece la precision a 9
    std::cout << f << '\n';

    return 0;
}