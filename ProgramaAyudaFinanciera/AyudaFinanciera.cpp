#include <string>
#include<vector>
#include <iostream>
using namespace std;
int numcategorias{0};
string gpass{"1111"};
struct Categorias
{
    double Gasto;
    double Ingreso;
    std::string Nombre;
    std::string Movimientos[20];
}vercategorias[10];
bool Contrasena()
{
    string pass;
    bool estado=false;
    cout << "Introduce tu pin o contraseña: ";
    getline(cin, pass);
    if (pass == gpass)
    {
        cout << "Bienvenido Juanito Perez\n";
        estado = true;
    }
    else
    {
        system("cls");
        cout << "Contraseña incorrecta, vuelva a introducirla\n";
        Contrasena();
    }
    return estado;
}
bool BuscarindexCategoria(string cat)
{
    int i;
    int re=11;
    for (i = 0;i <= 10;i++)
    {
        if (vercategorias[i].Nombre == cat)
        {
            re = i;
            break;
        }
    }
    return re;
}
bool BuscarCategoria(string cat,int limite)
{
    int i;
    bool re{ false };
    for (i = 0;i <= limite;i++)
    {
        if (vercategorias[i].Nombre == cat)
        {
            re = true;
            break;
        }
    }
    return re;
}
int CrearCategoria()
{
    if (numcategorias < 10)
    {
        cout << "Nombre de la categoria: ";
        string nomcat;
        getline(cin, nomcat);
        if (BuscarCategoria(nomcat, numcategorias) == false)
        {
            double fondo{};
            vercategorias[numcategorias].Nombre = nomcat;
            do
            {
                cout << "Fondos: ";
                cin >> fondo;
            } while (fondo < 0);
            vercategorias[numcategorias].Ingreso = fondo;
            cout << "Categoria registrada con exito\n";
            numcategorias += 1;
        }
        else
        {
            system("cls");
            cout << "La Categoria ya fue registrada, intente ingresando otro nombre\n";
            CrearCategoria();
        }
    }
    else
    {
        cout << "Solo puedes tener 10 categorias....";
    }
        return 0;
}
string DesplegarCategorias()
{
    int i;
    for (i = 0;i <= 10;i++)
    {
        if (vercategorias[i].Nombre != "")
        {
            cout << vercategorias[i].Nombre<<"================================== Ingresos: "<<vercategorias[i].Ingreso<<" ,Gastos: "<<vercategorias[i].Gasto<<'\n';
        }
        else
        {
            break;
        }
    }
    return "";
}
int cambiarcontrasena()
{
    bool contra;
    contra = Contrasena();
    string con1, con2;
    cout << "Introduce su nueva contraseña";
    getline(cin, con1);
    cout << "Confirme su nueva contraseña";
    do
    {
        getline(cin, con2);
        if (con1 == con2)
        {
            gpass = con1;
            contra == false;
        }
        else
        {
            cout << "Las contraseñas no coinciden, Vuelva a introducir la contraseña";
        }
    } while (contra == true);
    return 0;
}
int recorrercategorias(string categoria)
{
    int i, index;
    index = BuscarindexCategoria(categoria);
    for (i = index;i < 9;i++)
    {
        vercategorias[i].Nombre = vercategorias[i + 1].Nombre;
        vercategorias[i].Ingreso = vercategorias[i + 1].Ingreso;
        vercategorias[i].Gasto = vercategorias[i + 1].Gasto;
        int g;
        for (g = 0;g <= 20;g++)
        {
            vercategorias[i].Movimientos[g] = vercategorias[i + 1].Movimientos[g];
        }
    }
    vercategorias[numcategorias].Nombre = "";
    vercategorias[numcategorias].Gasto = 0;
    vercategorias[numcategorias].Ingreso = 0;
    int g;
    for (g = 0;g <= 20;g++)
    {
        vercategorias[numcategorias].Movimientos[g] = vercategorias[i + 1].Movimientos[g];
    }
    numcategorias -= 1;
    return 0;
}
int opciones()
{
    int op;
    cout << "Que Movimiento deseas hacer?\n";
    cout << "1)Crear nueva categoria\n2)Revisar Categorias\n3)Eliminar Categoria\n4)Cambiar Contraseña\n5)Salir\n";
    cin >> op;
    cin.ignore(32767, '\n');
    string nomcat{},resp;
    bool repeat = true;
    switch (op)
    {
    case 1:
        CrearCategoria();
        opciones();
        break;
    case 2:
        DesplegarCategorias();
        opciones();
        break;
    case 3:
        DesplegarCategorias();
        cout << "Que Categoria deseas eliminar?";
        getline(cin,nomcat);
        if (BuscarCategoria(nomcat, numcategorias) == true)
        {
            string resp;
            bool x{ false };
            do
            {
                cout << "Seguro que deseas eliminar la categoria?  y/n\n";
                getline(cin, resp);
                if (resp == "y")
                {
                    recorrercategorias(nomcat);
                    x = true;
                }
                else if (resp == "n")
                {
                    opciones();
                }
                else
                {
                    system("cls");
                    cout << "Opcion incorrecta, vuelva a intentarlo\n";

                }
            }while (x == false);
        }
        else
        {
            system("cls");
            cout << "La categoria no existe";
            opciones();
        }
        opciones();
        break;
    case 4:
        cambiarcontrasena();
        opciones();
        break;
    case 5:
        do
        {
            cout << "Seguro que desea cerrar sesion?  (y/n)";
            getline(cin, resp);
            if (resp == "y")
            {
                system("cls");
                cout << "Hasta luego usuario";
                repeat = false;
            }
            else if (resp == "n")
            {
                opciones();
            }
            else
            {
                system("cls");
                cout << "Opcion incorrecta";
            }
        } while (repeat == false);
        break;
    default:
        system("cls");
        cout << "Opcion Incorrecta, vuelva a intentarlo";
        opciones();
    } 
    return 0;
}
int main()
{
    bool nunca = false;
    do
    {
        bool contra;
        contra = Contrasena();
        if (vercategorias[0].Nombre == "")
        {
            system("cls");
            std::cout << "No tienes ninguna categoria registrada!";
        }
        opciones();
    } while (nunca == false);
    return 0;
}
