#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdlib.h>
#include <cstring>
std::string Respuesta,RespuestaT;
//declaracion de las cuentas
std::string Vectorcuentas[5]{ "4212569078351023","4212569078358301","4212569078357092","4212569078189203","4212569078102854" };
std::string Vectorpin[5]{ "2222","1111","4444","3333","6666" };
float VectorDinero[5]{ 2900.2,7200.2,1500.2,5600.2,2200.2 };
bool CuentaEncontrada = false;
bool CuentaEncontradaT = false;
int  i, op, Cantidad,CantidadT,j;
std::string NumCuenta, Pin, NuevoPin,Banco,Nombre;
int RestablecerValores()
{
    CuentaEncontrada = false;
    NumCuenta = "";
    Pin = "";
    i = 0;
    op = 0;
    Cantidad = 0;
    NuevoPin = "";
    return 0;
}
int DeseaContinuar()
{
Incorrecto:
    bool estado{ false };
    std::cout << "Desea Continuar? y/n \n";
    std::cin >> Respuesta;
    if (Respuesta == "y")
    {
        estado = true;
    }
    else if (Respuesta == "n")
    {
        RestablecerValores();
        system("cls");
        estado = false;
    }
    else
    {
        system("cls");
        std::cout << "Opcion Incorrecta\n";
        goto Incorrecto;
    }
    return estado;
}
int main()
{
inicio:
    std::cout << "Bienvenido al ATM de BANCHOLOPEZ \n";
IngresoDatos:
    std::cout << "Por favor ingresa el Numero de tu tarjeta: ";
    std::cin >> NumCuenta;
    if (NumCuenta.length() != 16)
    {
        std::cout << "El numero de tarjeta debe contener 16 digitos, intente de nuevo. \n";
        goto IngresoDatos;
    }
    if (CuentaEncontrada == false)
    {
        i = 0;
 ContinuaCiclo:
        if (i < 5)
        {
            if (Vectorcuentas[i] == NumCuenta)
            {
                CuentaEncontrada = true;
                goto FinCiclo;
            }
            i++;
            goto ContinuaCiclo;
        }
    }
FinCiclo:
    if (CuentaEncontrada == false)
    {
        system("cls");
        std::cout << "Su Cuenta no existe, Vuelva a Intentarlo\n";
        goto IngresoDatos;
    }
ContrasenaIncorrecta:
    std::cout << "A continuacion, Ingrese los 4 digitos del PIN de su Tarjeta: ";
    std::cin >> Pin;
    if (Vectorpin[i] == Pin)
    {
        goto Opciones;
    }
    else
    {
        std::cout << "Contraseña Incorrecta, Ingresela de nuevo\n";
        goto ContrasenaIncorrecta;
    }
Opciones:
    system("cls");
    std::cout << "Bienvenido Usuario: " << Vectorcuentas[i] << "\n";
    std::cout << "Que operacion desea realizar?\n";
    std::cout << "1)Retiro de efectivo\n";
    std::cout << "2)Consulta de saldo\n";
    std::cout << "3)Cambio de pin \n";
    std::cout << "4)Tranferencia entre Cuentas\n";
    std::cout << "5)Salir\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
    Retiro:
        std::cout << "Cuanto Efectivo Desea Retirar?\n\n\n";
        std::cin >> Cantidad;
        if (Cantidad <= (VectorDinero[i]))
        {
            if ((Cantidad % 50) == 0)
            {
                std::cout << "Fondos Anteriores: " << VectorDinero[i] << "\n";
                VectorDinero[i] = VectorDinero[i] - Cantidad;
                std::cout << "Cantidad a retirar: " << Cantidad << "\n";
                std::cout << "Nuevos Fondos: " << VectorDinero[i] << "\n";
                if (DeseaContinuar() == true)
                {
                    goto Opciones;
                }
                else
                {
                    goto inicio;
                }
            }
            else
            {
                std::cout << "Billete minimo de 50 pesos, intente de nuevo";
                goto Retiro;
            }
        }
        else
        {
            std::cout << "No cuentas con suficientes Fondos, Fondos Disponibles: " << VectorDinero[i] << "\n";
            goto Retiro;
        }
        break;
    case 2:
        std::cout << "Su saldo es: " << VectorDinero[i] << "\n";
        if (DeseaContinuar() == true)
        {
            goto Opciones;
        }
        else
        {
            goto inicio;
        }
        break;
    case 3:
    LenPinIncorrecto:
        std::cout << "Ingrese su nuevo Pin: ";
        std::cin >> NuevoPin;
        if (NuevoPin.length() == 4)
        {
            Vectorpin[i] = NuevoPin;
            std::cout << "Su Pin ha sido cambiado con exito!\n";
            if (DeseaContinuar() == true)
            {
                goto Opciones;
            }
            else
            {
                goto inicio;
            }
        }
        else
        {
            std::cout << "El Pin debe tener 4 caracteres, Vuelva a intentarlo\n";
            goto LenPinIncorrecto;
        }
        break;
    case 4:
lenincorrecto:
        std::cout << "a que Cuenta desea transferir? ";
        std::cin >> NumCuenta;
        Banco = NumCuenta.substr(0, 4);
        if (NumCuenta.length() != 16) 
        {
            std::cout << "El Numero de Tarjeta debe tener 16 Digitos, intente de nuevo\n";
            goto lenincorrecto;
        }
        if(Banco=="4212")
        {
            j = 0;
ContinuaCicloT:
            if (j < 5)
            {
                if (Vectorcuentas[j] == NumCuenta)
                {
                    CuentaEncontradaT = true;
                    goto FinCicloT;
                }
                j++;
                goto ContinuaCicloT;
            }
FinCicloT:
            std::cout << "Nombre del Beneficiario: ";
            std::cin >> Nombre;
FondosInsuficientesT:
            std::cout << "\nImporte: ";
            std::cin >> Cantidad;
RelegirRespuestaT:
            std::cout << "\nLos datos son Correctos? y/n\n";
            std::cin >> Respuesta;
            if (Respuesta == "y")
            {
                if (Cantidad <= VectorDinero[i])
                {
                    if (CuentaEncontradaT == true)
                    {
                        VectorDinero[j] += Cantidad;
                    }
                    VectorDinero[i] -= Cantidad;
                    if (DeseaContinuar() == true)
                    {
                        goto Opciones;
                    }
                    else
                    {
                        goto inicio;
                    }
                }
                else 
                {
                    std::cout << "No cuentas con efectivo suficiente";
                    goto FondosInsuficientesT;
                }
            }
            else if (Respuesta == "n")
            {
                system("cls");
                goto lenincorrecto;
            }
            else
            {
                system("cls");
                std::cout << "Opcion Incorrecta\n";
                goto RelegirRespuestaT;
            }
        }
        else
        {
            system("cls");
            std::cout<<"Solo se pueden Tranferir al mismo banco, Intente con otra Cuenta\n";
            goto lenincorrecto;
        }  
        break;
    case 5:
    RelegirRespuesta:
        std::cout << "Seguro que Desear salir? y/n";
        std::cin >> Respuesta;
        if (Respuesta == "y")
        {
            RestablecerValores();
            system("cls");
            goto inicio;
        }
        else if (Respuesta == "n")
        {
            goto Opciones;
        }
        else
        {
            system("cls");
            std::cout << "Opcion Incorrecta\n";
            goto RelegirRespuesta;
        }
    }

}