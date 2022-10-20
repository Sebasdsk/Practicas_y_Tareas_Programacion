#include <iostream>       
#include <string>
#include <conio.h>        
#include <cstdlib>

void menu();
  
//Declarando estructuras y sus datos predefinidos para el programa:

struct Producto  //Datos para los productos 
    {
        int identificadorP;
        std::string descripcion;
        double precioVenta;
        int numArticulos;
    };

struct Cliente  // Datos para los clientes
    {
        int identificadorC;
        std::string Nombre;
        double creditoMax,credito,adeudo;
    }clientes[10];

char confirmacion = 'N'; //Variable que se utiliza a la hora de hacer confirmaciones en ciclos

void agregarProductos(Producto productos[], int nP);
void agregarClientes(Cliente clientes[], int nC);    
int main()
{
    //Variables con las estructuras para clientes
    Producto productos[10]=
    {  //Datos de los productos
       //ID,Descripcion,Precio,CantidadStock 
       {1,"Manzana",15,5},
       {2,"CocaCola",20,15},
       {3,"Tortillas de Harina",15,10},
       {4,"Bote de Frijoles",20,15},
       {5,"Gansitos",10,10},
       {6,"Sabritas",10,15},
       {7,"Machaca",35,5},
       {8,"Leche",20,10},
       {9,"Oreo",10,10},
       {10,"Picafresas",1,50}
    };
    
    Cliente cientes[10]=
    {
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {}
    };
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
                        system("cls");
                        break;
                    
                    case 2:

                    case 6:


                    break;
                    default:
                    break;
                }

    } while (opcion != 6);
    getch();
    return 0;
}

// Funcion pendiente para buscar clientes
bool busquedaClientes(Cliente clientes[], int nC)
{
    int clienteBusqueda;
    std::cout << "Ingresa Identificador del cliente: ";
    std::cin >> clienteBusqueda;
        
        for (int i = 0; i <= 10; i++)
        {
            if (clienteBusqueda == clientes[i].identificadorC)
            {
                nC = i;
                return true;
                break;
            }
        }
    return false;
}


#if 0
 // funcion pendiente para hacer las ventas
float registroVenta(Cliente clientes[], Producto productos[], int i, int pBusqueda, int nProductos)
{  
    
    while (confirmacion = 'N')
    {
        std::cout<< "Id del producto: \n";
        std::cin >> pBusqueda;
            for (int i = 0; i <= sizeof(productos); i++)
            {
              if (pBusqueda == productos[i].identificadorP)
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
        std::cin >> productos[nP].identificadorP;
        std::cin.ignore();
        std::cout << "Nombre o Descripcion del producto: ";
        getline(std::cin, (productos[nP].descripcion));
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
    std::cin >> clientes[nC].identificadorC;
    std::cin.ignore();
    std::cout << "Nombre del cliente: \n";
    getline(std::cin, (clientes[nC].Nombre));
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