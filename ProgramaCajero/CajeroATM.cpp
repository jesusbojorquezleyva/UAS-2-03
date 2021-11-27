#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdlib.h>
//#include <cstring>
#include <ctime>
time_t now = time(0);
tm* tiempo;
std::string Respuesta, RespuestaT;
bool CuentaEncontrada = false;
bool CuentaEncontradaT = false;
int  i, op, j, opCompania, opSaldo, Saldo, g, PassIn;
float Cantidad, CantidadT;
std::string NumCuenta, Pin, NuevoPin, ConfirmarPin, Banco, Nombre, Compania;
struct ClientesBanco
{
    std::string NumCuenta, Pin, Movimientos[10];
    float Fondos;
    int IndexMovimientos = 0;
    bool Bloqueada = false;
}Usuarios[6];
int RecorrerMovimientos(int cuenta)
{
    int pos;
    for (pos = 1;pos > 9;pos++)
    {
        Usuarios[cuenta].Movimientos[pos] = Usuarios[cuenta].Movimientos[pos + 1];
    }
    return 0;
}
int VerificarMovimientos(int pos)
{
    Usuarios[pos].IndexMovimientos += 1;
    if (Usuarios[pos].IndexMovimientos > 10)
    {
        RecorrerMovimientos(pos);
        Usuarios[pos].IndexMovimientos = 10;
    }
    return 0;
}
int InicializarCuentas()
{
    Usuarios[1].NumCuenta = "4212569078351023";Usuarios[2].NumCuenta = "4212569078358301";Usuarios[3].NumCuenta = "4212569078357092";
    Usuarios[4].NumCuenta = "4212569078189203";Usuarios[5].NumCuenta = "4212569078102854";
    Usuarios[1].Pin = "2222";Usuarios[2].Pin = "1111";Usuarios[3].Pin = "4444";Usuarios[4].Pin = "3333";Usuarios[5].Pin = "6666";
    Usuarios[1].Fondos = 2900.2;Usuarios[2].Fondos = 7200.2;Usuarios[3].Fondos = 1500.2;Usuarios[4].Fondos = 5600.2;Usuarios[5].Fondos = 2200.2;
    return 0;
}
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
    InicializarCuentas();
inicio:
    PassIn = 3;
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
            if (Usuarios[i].NumCuenta == NumCuenta)
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
    if (Usuarios[i].Bloqueada == true)
    {
        system("cls");
        std::cout << "Su Cuenta esta Bloqueada, Comuniquese con el banco\n";
        goto inicio;
    }
    std::cout << "A continuacion, Ingrese los 4 digitos del PIN de su Tarjeta: ";
    std::cin >> Pin;
    if (Usuarios[i].Pin == Pin)
    {
        goto Opciones;
    }
    else
    {
        PassIn -= 1;
        std::cout << "Contraseña Incorrecta, Ingresela de nuevo. Te quedan " << PassIn << "Intentos\n";
        if (PassIn == 0)
        {
            system("cls");
            std::cout << "Se te terminaron los intentos, tu cuenta sera bloqueada. Contacta con nuestro banco\n";
            Usuarios[i].Bloqueada = true;
            goto inicio;
        }
        goto ContrasenaIncorrecta;
    }
Opciones:
    system("cls");
    std::cout << "Bienvenido Usuario: " << Usuarios[i].NumCuenta << "\n";
    std::cout << "Que operacion desea realizar?\n";
    std::cout << "1)Retiro de efectivo\n";
    std::cout << "2)Consulta de saldo\n";
    std::cout << "3)Cambio de pin \n";
    std::cout << "4)Tranferencia entre Cuentas\n";
    std::cout << "5)Recargar Saldo\n";
    std::cout << "6)Consulta de Movimientos\n";
    std::cout << "7)Salir\n";
    std::cin >> op;
    std::cin.ignore(32767, '\n');
    switch (op)
    {
    case 1:
    Retiro:
        std::cout << "Cuanto Efectivo Desea Retirar?\n\n\n";
        std::cin >> Cantidad;
        if (Cantidad <= (Usuarios[i].Fondos))
        {
            if ((static_cast<int>(Cantidad) % 50) == 0)
            {
                std::cout << "Fondos Anteriores: " << Usuarios[i].Fondos << "\n";
                Usuarios[i].Fondos -= Cantidad;
                std::cout << "Cantidad a retirar: " << Cantidad << "\n";
                std::cout << "Nuevos Fondos: " << Usuarios[i].Fondos << "\n";
                VerificarMovimientos(i);
                Usuarios[i].Movimientos[Usuarios[i].IndexMovimientos] = "Retiraste Dinero: " + std::to_string(Cantidad);
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
                std::cout << "Billete minimo de 50 pesos, intente de nuevo\n";
                goto Retiro;
            }
        }
        else
        {
            std::cout << "No cuentas con suficientes Fondos, Fondos Disponibles: " << Usuarios[i].Fondos << "\n";
            goto Retiro;
        }
        break;
    case 2:
        std::cout << "Su saldo es: " << Usuarios[i].Fondos << "\n";
        VerificarMovimientos(i);
        Usuarios[i].Movimientos[Usuarios[i].IndexMovimientos] = "Consultaste tu saldo: " + std::to_string(Usuarios[i].Fondos);
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
        std::cout << "Introduce tu Pin: ";
        std::cin >> Pin;
        if (Pin == Usuarios[i].Pin)
        {
        LenPinIncorrecto:
            std::cout << "Ingrese su nuevo Pin: ";
            std::cin >> NuevoPin;
        ConfirmarNuevo:
            std::cout << "Confirme su Nuevo Pin: ";
            std::cin >> ConfirmarPin;
            if (NuevoPin == ConfirmarPin)
            {
                if (NuevoPin.length() == 4)
                {
                    Usuarios[i].Pin = NuevoPin;
                    std::cout << "Su Pin ha sido cambiado con exito!\n";
                    VerificarMovimientos(i);
                    Usuarios[i].Movimientos[Usuarios[i].IndexMovimientos] = "Cambiaste tu Pin";
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
            }
            else
            {
                std::cout << "Los Pin No son iguales, Vuelva a verificar\n";
                goto ConfirmarNuevo;
            }
        }
        break;
    case 4:
    lenincorrecto:
        std::cout << "a que Cuenta desea transferir? ";
        std::getline(std::cin,NumCuenta);
        Banco = NumCuenta.substr(0, 4);
        if (NumCuenta.length() != 16)
        {
            std::cout << "El Numero de Tarjeta debe tener 16 Digitos, intente de nuevo\n";
            goto lenincorrecto;
        }
        if (Banco == "4212")
        {
            j = 0;
        ContinuaCicloT:
            if (j < 5)
            {
                if (Usuarios[j].NumCuenta == NumCuenta)
                {
                    CuentaEncontradaT = true;
                    goto FinCicloT;
                }
                j++;
                goto ContinuaCicloT;
            }
        FinCicloT:
            std::cout << "Nombre del Beneficiario: ";
            std::getline(std::cin,Nombre);
        FondosInsuficientesT:
            std::cout << "\nImporte: ";
            std::cin >> Cantidad;
        RelegirRespuestaT:
            std::cout << "\nLos datos son Correctos? y/n\n";
            std::cin >> Respuesta;
            if (Respuesta == "y")
            {
                if (Cantidad <= Usuarios[i].Fondos)
                {
                    if (CuentaEncontradaT == true)
                    {
                        Usuarios[j].Fondos += Cantidad;
                        VerificarMovimientos(j);
                        Usuarios[j].Movimientos[Usuarios[j].IndexMovimientos] = "Te Enviaron Dinero: " + std::to_string(Cantidad) + ", Hora: ";
                    }
                    VerificarMovimientos(i);
                    Usuarios[i].Movimientos[Usuarios[i].IndexMovimientos] = "Enviaste Dinero: " + std::to_string(Cantidad) + " A: " + Nombre;
                    Usuarios[i].Fondos -= Cantidad;
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
            std::cout << "Solo se pueden Tranferir al mismo banco, Intente con otra Cuenta\n";
            goto lenincorrecto;
        }
        break;
    case 5:
    OpcionesSaldo:
        std::cout << "De Que Compañia Deseas Tu Recarga?";
        std::cout << "1)Telcel\n2)Movistar\n3)AT&T\n4)Weex\n5)PilloFon\n";
        std::cin >> opCompania;
        switch (opCompania)
        {
        case 1:
            Compania = "Telcel";
            break;
        case 2:
            Compania = "Movistar";
            break;
        case 3:
            Compania = "AT&T";
            break;
        case 4:
            Compania = "Weex";
            break;
        case 5:
            Compania = "PilloFon";
            break;
        default:
            system("cls");
            std::cout << "Compañia Invalida, Elige otra Opcion";
            goto OpcionesSaldo;
            break;
        }
    OpcionRecarga:
        std::cout << "De Cuanto Deseas Tu Recarga?\n";
        std::cout << "1)20 Pesos\n";
        std::cout << "2)50 Pesos\n";
        std::cout << "3)100 Pesos\n";
        std::cout << "4)200 Pesos\n";
        std::cout << "5)500 Pesos\n";
        std::cout << "6)Regresar\n";
        std::cin >> opSaldo;
        switch (opSaldo)
        {
        case 1:
            Saldo = 20;
            break;
        case 2:
            Saldo = 50;
            break;
        case 3:
            Saldo = 100;
            break;
        case 4:
            Saldo = 200;
            break;
        case 5:
            Saldo = 500;
            break;
        case 6:
            goto Opciones;
        default:
            system("cls");
            std::cout << "Opcion Invalida,Vuelve a intentarlos";
            goto OpcionRecarga;
            break;
        }
        if (Saldo <= Usuarios[i].Fondos)
        {
            Usuarios[i].Fondos -= Saldo;
            VerificarMovimientos(j);
            Usuarios[i].Movimientos[Usuarios[i].IndexMovimientos] = "Hiciste una Recarga " + Compania + " por la Cantidad: " + std::to_string(Cantidad);
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
            system("cls");
            std::cout << "No Cuentas con Fondos Suficientes, Elige otra Opcion";
            goto OpcionRecarga;
        }
        break;
    case 6:
        system("cls");
        std::cout << "Tus Movimientos son:\n";
        for (g = 1;g <= 10;g++)
        {
            if (Usuarios[i].Movimientos[g] == "")
            {
                break;
            }
            else
            {
                std::cout << Usuarios[i].Movimientos[g] << "\n";
            }
        }
        if (DeseaContinuar() == true)
        {
            goto Opciones;
        }
        else
        {
            goto inicio;
        }
        break;
    case 7:
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