#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdlib.h>
int main()
{
    //declaracion de las cuentas
    char Matrizcuentas[5][3];
    bool CuentaEncontrada=false;
    int IndexCuenta;
    char NumCuenta,Pin;
    Matrizcuentas(1,1)="4212569078357092"
    Matrizcuentas(1,2)="2222"
    Matrizcuentas(1,3)="2900.2"
    Matrizcuentas(2,1)="4212719283657032"
    Matrizcuentas(2,2)="1111"
    Matrizcuentas(2,3)="7200.2"
    Matrizcuentas(3,1)="4212569078910373"
    Matrizcuentas(3,2)="4444"
    Matrizcuentas(3,3)="1500.2"
    Matrizcuentas[4,1]="4212569078189203"
    Matrizcuentas[4,2]="3333"
    Matrizcuentas[4,3]="5600.2"
    Matrizcuentas[5,1]="4212569078319204"
    Matrizcuentas[5,2]="6666"
    Matrizcuentas[5,3]="2200.2"
inicio:
    std::cout<<"Bienvenido al ATM de BANCHOLOPEZ \n";
IngresoDatos:
    std::cout<<"Por favor ingresa el Numero de tu tarjeta: ";
    std::cin>>NumCuenta;
ContrasenaIncorrecta:
    std::cout<<"A continuacion, Ingrese los 4 digitos del PIN de su Tarjeta: ";
    std::cin>>Pin;
    if (CuentaEncontrada=false)
    {
        for (i=0;6,i++);
        {
            if(Matrizcuentas[i,1]=NumCuenta)
            {
                IndexCuenta=i;
                CuentaEncontrada=true;
                i=6;
            } 
        }
    }
    if (CuentaEncontrada=true)
    {
        if (Matrizcuentas(IndexCuenta,2)=Pin)
        {
            goto Opciones;
        }
        else
        {
            std::cout<<"Contraseña Incorrecta, Ingresela de nuevo\n";
            goto ContrasenaIncorrecta;
        }
    }
Opciones:
    system("cls");
    std::cout<<"Bienvenido Usuario: "<<NumCuenta<<"\n";
    std::cout<<"Que operacion desea realizar? 1)Retiro de efectivo 2)Consulta de saldo 3)Cambio de NIP 4)Tranferencia a otras cuentas 5)Pago de Servicios\n";
}
