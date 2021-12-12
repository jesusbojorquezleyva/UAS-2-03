#include <cstring>
#include <iostream>
#include <iterator>//std::size

int main()
{
    char buffer[255];
    std::cout<<"Ingresaste una cadena: ";
    std::cin.getline(buffer,sizeof(buffer));

    int spacesFound{0};
    int bufferLength{static_cast<int>(std::strlen(buffer))};
    for (int index{0}; index<bufferLength;++index)
    {
        if(buffer[index]==' ')
            ++spacesFound;
    }

    std::cout<<"Ingresaste "<<spacesFound<<" espacios!\n";

    return 0;
}