#include <iostream>

int main()
{
    int outer{5};
    while(outer>=1)
    {
        int inner{5};
        while(inner>0)
        {
                std::cout<<inner--<<' ';
        }

        std::cout<<'\n';
        --outer;
    }
    //pregunta 4
    int outer1=1;
    while(outer1<=5)
    {
        int inner{5};
        while(inner>0)
        {
            if (inner>outer1)
            {
                std::cout<<"  ";
            }
            else
            {
                std::cout<<inner<<' ';
            }
            inner--;
        }
        outer1++;
    }
    return 0;
}