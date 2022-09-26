#include <iostream>
#include "input.h"
int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std:: cout << x << " + " << y << " es " << x + y << '\n';
    return 0;
}