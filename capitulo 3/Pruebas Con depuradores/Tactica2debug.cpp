#include <iostream>

int getValue()
{
    std::cerr << "getValue() llamado \n";
    return 4;
}

int main()
{
    std::cerr << "Main () llamado \n";
    std::cout << getValue();

    return 0;
}