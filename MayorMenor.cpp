#include <iostream>
int mayor(int n1, int n2)
{
    //n1 y n2 muere en la linea 15. aux muere en la linea 11
    if (n1>n2)
    {
        int aux = n1;
        std::cout << "Intercambiando Valores\n";
        n1 = n2;
        n2 = aux;
    }
    std::cout << "Valor Menor: " << n1 << "\n";
    std::cout << "Valor Mayor: " << n2 << "\n";    
    return 0;
}
int main()
{ //x e y mueren en la linea 25
    int x, y;
    std::cout << "Introduce un Numero entero: ";
    std::cin >> x;
    std::cout << "introduce un numero entero mayor: ";
    std::cin >> y;
    mayor(x, y);
    return 0;
}