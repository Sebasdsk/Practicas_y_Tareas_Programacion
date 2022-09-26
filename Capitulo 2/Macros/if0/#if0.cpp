#include <iostream>

int main()
{
    std::cout << "Sebas \n";

    #if 0 // No compile nada a partir de aqui
        std::cout << "Geovany \n";
        std::cout << "No me repruebe \n";
    #endif //hasta este punto

    return 0;
}