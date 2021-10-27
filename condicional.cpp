#include <iostream>
int main()
{
    int x{20};
    int y={30};
    int lager;
    if (x>y)
    {
        lager=x;
    }
    else
    {
        lager=y;
    }
    return 0;
    //es lo mismo que lager=(x>y)?x:y;
}