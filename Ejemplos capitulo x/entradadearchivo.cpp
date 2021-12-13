#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream inf{"Sample.dat"};
    if (!inf)
    {
        std::cerr<<"Uh oh, Sample.dat no se puede abrir para escritura!"<<std::endl;
        return 1;
    }
    while (inf)
    {
        std::string strInput;
        //inf >> strInput; forma no correcta
        std::getline(inf,strInput);//forma correcta
        std::cout<<strInput<<'\n';
    }

    return 0;
    
}