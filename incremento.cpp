#include <iostream>
int main()
{
    int x{5};
    int z=x++;
    int y=++x;
    std::cout<<x<<' '<<y<<' '<<z;
    return 0;
}