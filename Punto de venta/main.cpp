#include <iostream>       
#include <string>
#include <conio.h>        
#include <cstdlib>

void menu();
  

struct Producto  //Datos para los productos 
    {
        int identificador;
        std::string descripcion;
        double precioVenta;
        int numArticulos;
    }; 

struct Cliente  // Datos para los clientes
    {
        int identificador;
        std::string Nombre;
        double creditoMax,credito,adeudo;
    };
char confirmacion = 'N';
void agregarProductos(Producto productos[], int nP);
void agregarClientes(Cliente clientes[], int nC);    
int main()
{
    //Variables con las estructuras para clientes
    Producto productos[10];
    Cliente cientes[10];
    int opcion{0};

    int productoBusqueda;

    int nP = 0;                                 // nP = "Numero de productos"
    int nC = 0;                                 // nC = "Numero de Clientes"
    std::cout << "Bienvenido al Abarrote FIM ";
    do
    {
    menu();
    std::cin >> opcion;
    
            switch (opcion)
            {
            case 1:
                agregarProductos(productos,nP);
            
                break;
            case 6:
            break;
            default:
                break;
            }
    
    } while (opcion != 6);
    getch();
    return 0;
}

#if 0 // funcion pendiente para hacer las ventas
float registroVenta(Cliente clientes[], Producto productos[], int i, int pBusqueda, int nProductos)
{
    while (confirmacion = 'N')
    {
        std::cout<< "Id del producto: \n";
        std::cin >> pBusqueda;
            for (int i = 0; i <= sizeof(productos[ ]); i++)
            {
              if (pBusqueda == productos[i].identificador)
              {
                std::cout << "Cuantos productos desea llevar? ";
                std::cin  >> nProductos;
              }
              
                
            }
            
    }
}
#endif

void agregarProductos(Producto productos[], int nP)         // Funcion para agregar productos al sistema
{
    confirmacion = 'N';
    do
    {
        std::cout << "Identificador del producto ";
        std::cin >> productos[nP].identificador;
        std::cout << "Nombre o Descripcion del producto: ";
        std::cin >> productos[nP].descripcion;
        std::cout << "Precio de Venta: ";
        std::cin >> productos[nP].precioVenta;
        std::cout << "Numero de articulos: ";
        std::cin >> productos[nP].numArticulos;
        
        nP++;
        std::cout << "Desea Agregar mas articulos?";
        std::cin >> confirmacion;

    }while (confirmacion != 'N' && confirmacion != 'n');

}

void agregarClientes(Cliente clientes[], int nC)           // Funcion para agregar clientes al sistema
{
    std::cout << "Identificador de Cliente: \n";
    std::cin >> clientes[nC].identificador;
    std::cout << "Nombre del cliente: \n";
    std::getline(std::cin, clientes[nC].Nombre);
    std::cout << "Credito Maximo: \n";
    std::cin >> clientes[nC].creditoMax;
}


void menu()
{
    std::cout << "\n";
    std::cout << "\n Elija lo que desea realizar: \n";
    std::cout << "1. Venta \n" << "2. Registrar Productos \n"<< "3. Consultar Ventas \n"<< "4. Agregar Clientes \n"; 
    std::cout << "\n";

}