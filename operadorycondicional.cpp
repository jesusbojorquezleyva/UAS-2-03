#include <iostream>
void foo(int x, int y)
{
    sumar(x,y);
}
int main()
{
    int x{1};
    int y{2};
    std::cout<<(++x,++y);
    return 0;
}