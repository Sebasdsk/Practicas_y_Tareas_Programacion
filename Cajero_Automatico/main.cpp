#include <iostream>       
#include <string>
#include <conio.h>        //getch()
#include <cstdlib>

void menu();
//float retirar(float x, float y);
//float depositar(float x, float y);

#define ENTER 13
#define BACKSPACE 8

int apuntador;          // Es el apuntador dentro del vector que define que cuenta se esta usando
int apuntadorMov{0};         // Es el apuntador que sirve de parametro dentro del vector tipo           

int main() //en la funcion main se va a crear un menu que despliegara mas funciones como: Retirar, Depositar, Consultar Saldo, Transferencia, cambio nip
{   
    float retiro{0},deposito{0}, transf{0};
    
    std::string cuenta, nip;
    
    std::string cuentas[3] = {"1234","4512","6912"};            //Cuentas bancarias de prueba ya hechas
    std::string nips[3] = {"0000","1223","9876"};  
    
    //Genera un numero aleatorio en la variable de 1000 a 15000 (simulando dinero)
    float dinero[3];
    
    bool cerrar_sesion = false;
    int tipoMovimientos[3];
    int cantidadMovimientos[5];
    int contador = 0;
    bool ingresa = false;

    //Ciclo que nos da las variables de dinero
    for (int j = 0; j < 3; j++)
    {
        dinero[j] = 1000 + rand( )% 15000;
    }
    
    do
    {
        do
        {
            system("cls");
            std::cout << "\tLOGIN\n";
            std::cout <<"-------------------\n";
            std::cout << "Cuenta: ";
            
            getline(std::cin, cuenta);
            
            std::cout << "NIP: ";                                                                           
            char caracter;
            caracter = getch();

            //reseteamos variable password para que no quede almacenado lo de la funcion getch

            nip= "";
            
            //mientras la tecla sea diferente a ENTER entraremos a un ciclo para pasar lo que escribamos a teclado a un caracter en este caso "*"
            while (caracter != ENTER)      
            {
                if (caracter != BACKSPACE)           
                {                           
                    nip.push_back(caracter);
                    std::cout << "*";
                } else
                {
                    if (nip.length() > 0)
                    {
                        std::cout << "\b \b";
                        nip = nip.substr(0, nip.length() - 1);      //borra el ultimo caracter de la variable
                    }
                }
                caracter = getch();
            }    
                                                                                                                
            for (int i = 0; i < 3; i++)         // Si el log in se realizo exitosamente
            {
                if (cuentas[i]== cuenta && nips[i] == nip )
                {
                    ingresa = true;
                    apuntador = i;
                    break;
                }
            }
                if (ingresa == false)
            {
                std::cout << "\n" << "El usuario y/o la clave son incorrectos: \n \n";
                std::cin.get();
                contador++;
            }        
        
        } while (ingresa == false && contador < 3);        //Las condiciones del bucle es que se sigue repitiendo si no se ha hecho el login correctamente con solamente 3 intentos

        if(ingresa == false){
            std::cout << "\n" << "Usted no pudo entrar al sistema, Adios \n";
            return 0;
        }else
        {
                
        
        //seccion de elegir 
            int opc{0};
            do
            {
               
                menu();
                opc = 0;
                std::cin >> opc;
                switch (opc)
                {
                case 1:             //Retirar
                    std::cout << "Cuanto desea retirar? ";
                    std::cin >> retiro;
                    if (retiro > dinero[apuntador])
                    {
                        std::cout << "Operacion invalida, vuelva a intentarlo \n";
                        system("pause");
                    }else{
                    dinero[apuntador] = dinero[apuntador] - retiro;
                    std::cout << "Usted ha retirado: " << retiro << " Le queda en su cuenta: " << dinero[apuntador] << "\n";
                    
                    tipoMovimientos[apuntadorMov] = 0;
                    cantidadMovimientos[apuntadorMov] = retiro;
                    apuntadorMov++;
                   
                    }
                    break;

                case 2:              //Depositar
                    std::cout << "Cuanto desea depositar? ";
                    std::cin >> deposito;
                    if (deposito > 0)
                    {
                        dinero[apuntador] = dinero[apuntador] + deposito;
                        std::cout << "Usted ha depositado: " << deposito << " Le queda en su cuenta: " << dinero[apuntador] << "\n";
                       
                    tipoMovimientos[apuntadorMov] = 0;
                    cantidadMovimientos[apuntadorMov] = deposito;
                    apuntadorMov++;
                       
                        system("pause"); 
                    }else{
                        std::cout << "Operacion invalida debe depositar una cantidad valida ";
                        system("pause");
                    }
                    break;

                case 3:
                    std::cout << "\n El saldo que tiene en su cuenta es de: " << dinero[apuntador] << "\n";
                    system("pause"); 
                    break;

                case 4:              //Cambio de NIP
                    std::cout << "\n Introduzca su actual nip: ";
                    std::cin >> nip;
                    if (nip == nips[apuntador])
                    {
                        std::cout << "Introduzca Nuevo nip: ";
                        std::cin >> nip;
                        nips[apuntador] =  nip;
                        std::cout << "Su nip ha sido cambiado";
                        cerrar_sesion = true;
                        system("pause"); 
                    }else
                    {
                        std::cout << "nip actual invalido vuelva a intentarlo \n";
                        system("pause"); 
                    }
                break;
                case 5:              //Transferencia
                    std::cout << "A que cuenta quiere transferir?: ";
                    std:: cin >> cuenta;
                    for (int j = 0; j < 3; j++)   //ciclo for que busca la cuenta como en el login
                {
                    if (cuentas[j] == cuenta  )   
                    {
                        std:: cout << "Cuanto desea transferirle?: ";
                        std::cin >> transf;
                        if (transf > dinero[apuntador])
                        {
                        std::cout << "Operacion invalida debe depositar una cantidad valida ";
                        system("pause");

                        }else{
                         dinero[j] = dinero[j] + transf;
                        dinero[apuntador] = dinero[apuntador] - transf;
                        std::cout << "Usted ha transferido: " << transf << "A la cuenta: " << cuentas[j] << "\n";

                        tipoMovimientos[apuntadorMov] = 0;
                        cantidadMovimientos[apuntadorMov] = transf;
                        apuntadorMov++;

                        system("pause"); 
                        }
                    }
                }
                break;              //ultimos movimientos realizados
                case 6:
                    std::cout << "Ultimos movimientos realizados:  \n"; 
                       for (int k = 0; k < 10; k++)
                      {
                       switch (tipoMovimientos[k])
                       {
                       case 0:
                            std::cout << "Usted retiro: " << cantidadMovimientos[k] << "\n";
                        break;

                        case 1:
                            std::cout << "Usted deposito: " << cantidadMovimientos[k] << "\n";
                       default:

                       case 2: 
                       std::cout << "Usted transfirio: " << cantidadMovimientos[k] << "\n";
                        break;
                       }
                      }
                     system("pause"); 
                     
                break;
                case 7:             //Salir de la sesion o cambiar de cuenta
                    cerrar_sesion = true;
                    cuenta = {};       // Reseteo credenciales
                    nip = {};
                    break;
                case 8:             //Terminar programa
                    return 0;
                    break;
                default:
                    system("cls");
                    break;
                }

            } while (opc != 7);

            std :: cin.get();
        }   
    }while(cerrar_sesion == true);

    return 0;
}

void menu()
{
    std::cout << "\n";
    std::cout << "\n Elija lo que desea realizar: \n";
    std::cout << "1. Retirar \n" << "2. Depositar \n"<< "3. Consultar saldo \n"<< "4. Cambio NIP \n"  
                 "5. Transferencia \n"  << "6. Ultimos Movimientos \n" <<"7. Salir de la Sesion \n" << "8.Terminar Programa \n";
    std::cout << "\n";

}