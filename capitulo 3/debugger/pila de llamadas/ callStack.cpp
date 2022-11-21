#include <iostream>

void a()
{
    std::cerr << "Llamando a a()\n";
}

void b()
{
    std::cerr << "Llamando a b()\n";
    a();
}

int main()
{
    a();
    b();

    return 0;
}