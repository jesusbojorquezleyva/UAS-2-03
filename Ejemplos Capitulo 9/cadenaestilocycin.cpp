#include <iostream>

int main()
{
    char name[255];//declarar una matriz lo suficientemente grande para contener 255 caracteres
    std::cout<<"ingrese su nombre: ";
    /*std::cin>>name;//forma no recomendada*/
    std::cin.getline(name,sizeof(name));//forma correcta
    std::cout<<"Ingresaste: "<<name<<'\n';

    return 0;
}