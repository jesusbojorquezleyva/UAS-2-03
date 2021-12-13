#include <iostream>
#include <string>

int main()
{
    std::ifstream inf{"Sample.dat"};
    inf.seekg(0,std::ios::end);
    std::cout<<inf.tellg();
    if (!inf)
    {
        std::cerr<<"Uh oh, Sample.dat no puede ser abierto en modo escritura!\n";
        return 1;
    }

    std::string strData;

    inf.seekg(5);
    std::getline(inf, strData);
    std::cout<<strData<<'\n';

    inf.seekg(8,ios::cur);
    std::getline(inf,strData);
    std::cout<<strData<<'\n';

    inf.seekg(-15,ios::end);
    std::getline(inf,strData);
    std::cout<<strData<<'\n';

    return 0;
}