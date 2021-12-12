#include <iostream>
#include <iterator> //std::size

/*char myString[]{"string"};//ok
myString="rope";//no se permite!*/

int main()
{
    char myString[]{"string"};
    const int length{ static_cast<int>(sizeof(myString))};
    std::cout<<myString<<" tiene "<<length<<" caracteres.\n";

    for (int index{0}; index<length; ++index)
        std::cout<<static_cast<int>(myString[index])<<' ';

    std::cout<<'\n';

    return 0;
}