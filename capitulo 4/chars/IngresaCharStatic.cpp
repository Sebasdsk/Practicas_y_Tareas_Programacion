#include <iostream>

int main()
{
    std::cout << "Ingrese un caracter: "; //Se ingresa abcd
    
    char ch{};
    std::cin >> ch;// ch - 'a', "bcd" se queda en la cola.
    std::cout << ch << " Tiene el codigo ASCII " << static_cast<int>(ch) << '\n';

    //Nota: el siguiente cin no solicita al usuario una entrada, Toma la entrada en cola!
    std::cin >> ch; //ch - 'b', "cd" queda en la cola.
    std::cout << ch << " Tiene el codigo ASCII " << static_cast<int>(ch) << '\n';

    return 0;
}