#include <iostream>

int add(int x, int y)
{
    std::cerr << "Aqui se llama a la funcion add() \n";
    return x + y;
}

void printResult(int z)
{
    std::cerr << "Aqui se llama a la funcion printResult() \n";
    std::cout << "La respuesta es: " << z << '\n';
}

int getUserInput()
{
    std::cerr << "Aqui se llama a la funcion getUserInput() \n";
    std::cout << "Ingrese un numero: ";
    int x{};
    std::cin >> x;
    return x;   //se habia puesto --x que decrementaba x
}
int main()
{
    int x{getUserInput()};
    int y{getUserInput()};

    std::cout << x << " + " << y << '\n';

    int z{ add(x,y)};  //se habia puesto add(x,5) regresando x + 5 
    printResult(z);

    return 0;
}