#include <iostream>

double calcular(char op, int num1, int num2)
{
    switch (op)
    {
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            if (num2==0)?return 0; :return num1/num2;
            break;
        case '%':
            if (num2==0)?return 0; :return num1%num1;
                break;
        default:
            return 0;
    }
}
int main()
{
    std::cout<<"Ingrese un numero entero: ";
    int x{};
    std::cin>>x;

    std::cout<<"Ingrese otro numero entero: ";
    int y{};
    std::cin>>y;

    std::cout<<"Suma: "<<calcular('+',x,y);
    std::cout<<"Resta: "<<calcular('-',x,y);
    std::cout<<"Division: "<<calcular('*',x,y);
    std::cout<<"Multiplicacion: "<<calcular('*',x,y);
}
