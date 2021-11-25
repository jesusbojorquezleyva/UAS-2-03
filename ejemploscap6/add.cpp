#include "add.h"
#include <iostream>
namespace basicMath
{
    int add(int x, int y)
    {
        return x+y;
    }
}
int main()
{
    std::cout<<basicMath::add(4,3)<<'\n';
    return 0;
}