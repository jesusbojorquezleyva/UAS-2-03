/*double getDouble()
{
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin >> x;
    std::cin.ignore(32767,'\n');
    return x;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::.ignore(32767,'\n');
    }
} mal*/

//bien
double getDouble()
{
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin>>x;
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
    }
    else
    {
        std::cin.ignore(32767,'\n');
        return x;
    }
    return x;
}
