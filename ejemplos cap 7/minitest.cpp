#include <string>
#include <iostream>
using namespace std;
int main()
{
    cout<<"Ingresa tu nombre completo: ";
    string name;
    getline(cin,name);

    cout<<"Ingrese su edad: ";
    int age;
    cin>>age;
    int letras;
    letras=name.length();

    double years;

    years=age/letras;

    cout<<"Ha vivido "<<years<<" años por cada letra de su nombre.";
}