#include <iostream>
#include <string>

using namespace std;
string aMayusculas(string cadena)
{
    string newcadena;
    for (int i = 0; i < cadena.length(); i++) 
    { 
        newcadena += toupper(cadena[i]);
    }
    return newcadena;
}
string aMinusculas(string cadena)
{
    string newcadena;
    for (int i = 0; i < cadena.length(); i++) 
    { 
        newcadena += tolower(cadena[i]);
    }
    return newcadena;
}
string tipoOracion(string cadena)
{
    bool mayus{true};
    int longi{},i{};
    string newcadena,cadenita;

    longi=cadena.length();
    for(i=0;i<=longi-1;i++)
    {
        cadenita=cadena.substr(i,1);
        if(cadenita==".")
        {
            mayus=true;
            newcadena+=cadenita;
        }
        else
        {
            if (mayus==true)
            {
                newcadena=toupper(cadenita[1]);
                mayus=false;
            }
            else
            {
                newcadena=tolower(cadenita[1]);
            }
        }
    }
    return newcadena;
}
string tipoPronombre(string cadena)
{
    bool mayus{true};
    int longi{},i{};
    string newcadena,cadenita;

    longi=cadena.length();
    for(i=0;i<=longi-1;i++)
    {
        if(cadenita=="." || cadenita==" ")
        {
            mayus=true;
            newcadena+=cadenita;
        }
        else
        {
            if (mayus==true)
            {
                newcadena=toupper(cadenita[1]);
                mayus=false;
            }
            else
            {
                newcadena=tolower(cadenita[1]);
            }
        }
    }
    return newcadena;
}
string reversa(string cadena)
{
    int longi{},i{};
    string newcadena;
    longi=cadena.length();

    for (i=longi-1; i>=0;i--)
    {
        newcadena=cadena.substr(i,1);
    }
    return newcadena;
}
string replaceIt(string cadena)
{
    cout<<"Que cadena deseas cambiar: ";
    string acambiar;
    getline(cin,acambiar);

    cout<<"Por que cadena quieres cambiarla: ";
    string cambio;
    getline(cin,cambio);

    //buscar palabra
    int longi{},longiA{},longiB{},i{};
    longi=cadena.length();
    longiA = acambiar.length();
    for(i=0;i<longi-longiA; i++)
    {
        if (cadena.substr(i,longiA)==acambiar)
        {
            cadena=cadena.replace(i,longiA,cadena);
            break;
        }
    }
    return cadena;
}
int main()
{
    cout<<"Introduce una cadena: ";
    string cadena;
    getline(cin, cadena);

    cout<<"Que deseas hacer con esa cadena?\n";
    cout<<"1)Convertir a mayusculas\n2)Convertir a minusculas\n3)Convertir a Tipo Oracion\n4)Convertir a Nombres Propios\n5)Reversa\n6)Sustituir Cadena";
    int op{};
    cin>>op;

    switch(op)
    {
        case 1:
            cadena=aMayusculas(cadena);
            break;
        case 2:
            cadena=aMinusculas(cadena);
            break;
        case 3:
            cadena=tipoOracion(cadena);
            break;
        case 4:
            cadena=tipoPronombre(cadena);
            break;
        case 5:
            cadena=reversa(cadena);
            break;
        case 6:
            cadena=replaceIt(cadena);
    }
    cout<<cadena;

}