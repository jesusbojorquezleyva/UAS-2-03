#include <iostream>

double getDouble()
{
    while(true)
    {
    std::cout<<"Ingrese un valor double: ";
    double x{};
    std::cin>>x;
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
        std::cout<<"Oops, ingreso no valido. Intente de nuevo.\n";
    }
    else
    {
        std::cin.ignore(32767,'\n');
        return x;
    }
    }
    //return x;
}
char getOperator()
{
    while(true)
    {
        std::cout<<"Ingrese una de las siguientes opciones: +, -, *, or /: ";
        char operation{};
        std::cin>>operation;

        switch(operation)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;
            default:
                std::cin.ignore(32767, '\n');
                std::cout<<"Oops, ingreso no valido. Intente de nuevo.\n";
        }
    }
}
void printResult(double x, char operation, double y)
{
    switch(operation)
    {
        case '+':
            std::cout<<x<<" + "<<y<<" es "<<x+y<<'\n';
            break;
        case '-':
            std::cout<<x<<" - "<<y<<" es "<<x-y<<'\n';
            break;
        case '*':
            std::cout<<x<<" * "<<y<<" es "<<x*y<<'\n';
            break;
        case '/':
            std::cout<<x<<" / "<<y<<" es "<<x/y<<'\n';
            break;
        default:
        std::cout<<"Algo salio mal: printResult() tiene un operador invalido.\n";
    }
}
int main()
{
    double x{getDouble()};
    char operation{getOperator()};
    double y{getDouble()};

    printResult(x,operation,y);

    return 0;
}