#include <iostream>       
#include <string>
#include <conio.h>        
#include <cstdlib>


void menuVentas();
float validarDato();
void mostrarProductos();
 
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
    };
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
        //ID, Nombre, Credito Max, Credito Actual, Adeudo
        {1,"Roberto Rubio",500,0,0},
        {2,"Geovanny Ayala",500,0,0},
        {3,"Carlos Garcia",250,0,0},
        {4,"Jesus Quintero",500,0,0},
        {5,"Daniel Meza",500,0,0},
        {6,"Daniela Rodriguez",500,0,0},
        {7,"Hugo Sanchez",500,0,0},
        {8,"Sofia Blancas",500,0,0},
        {9,"Amayrani Lara",500,0,0},
        {10,"Laura Beltran",500,0,0}
    };


char confirmacion = 'N'; //Variable que se utiliza a la hora de hacer confirmaciones en ciclos

void agregarProductos(Producto productos[], int nP);
void agregarClientes(Cliente clientes[], int nC);    
int main()
{
    
    int opcion{0};

    int productoBusqueda{0};
    

    int nP = 0;                                 // nP = "Numero de productos"
    int nC = 0;                                 // nC = "Numero de Clientes"
    std::cout << "Bienvenido al Abarrote FIM \n";
    
     // Menu para venta y clientes
    do
    {
        menuVentas();
        int opcion{0};
        std::cin >> opcion;

                switch (opcion)
                {
                    case 1:
                        mostrarProductos();
                        getch();
                        break;
                    case 2:
                    agregarProductos(productos,nP);
                    system("cls");
                    case 6:


                    break;
                    default:

                    break;
                }

    } while (opcion != 6);
    
    getch();
    return 0;
}
//funcion pendiente para buscar clientes
#if 0
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
#endif
// funcion pendiente para hacer las ventas
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


void menuVentas()
{
    std::cout << "\n";
    std::cout << "\n Elija lo que desea realizar: \n";
    std::cout << "1.Mostrar Productos \n" << "2. Venta \n" << "3. Registrar Productos \n"<< "4. Agregar Clientes \n"; 
    std::cout << "\n";

}


void mostrarProductos()   // Funcion para mostrar los productos que hay:
{
    std::cout << "Productos disponibles: \n";
    for(int i = 0; i <= sizeof(productos); i++)
    {
        std::cout << "Descripcion: " << productos[i].descripcion << "\n";
        std::cout << "Cantidad Disponible: " << productos[i].numArticulos << "\n";
        std::cout << "Precio: " << productos[i].precioVenta << " Pesos \n";
        std::cout << "\n";
    }
}

float validarDato() 
{
    float datoleido(0);
    
    do
    {
        std::cin>>datoleido;

        while (datoleido<0) //Por si ingresa un numero negativo
        {
            std::cout<<"\n\t\t\t\t\tError, Vuelva a intentar: ";
            std::cin>>datoleido;
        }

        if (std::cin.fail()==true) //Por si ingresa una letra
        {
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout<<"\n\t\t\t\t\tError, Vuelva a intentar: ";
        }
        else
        {
            break;
        }
        
    } while (true);

    return datoleido;
}