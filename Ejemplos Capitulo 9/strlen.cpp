#include <iostream>
#include <cstring>
#include <iterator> //std::size

int main()
{
    char name[20]{"Geovany"};
    std::cout<<"Mi nombre es: "<<name<<'\n';
    std::cout<<name<<" tiene "<<std::strlen(name)<<" letras.\n";
    std::cout<<name<<" tiene "<<sizeof(name)<<"caracteres en el arreglo.\n";

    return 0;
}