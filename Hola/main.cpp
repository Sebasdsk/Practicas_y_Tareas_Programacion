#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hola", "C++", "Mundo", "desde", "VS Code", "y la extension de C++!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}