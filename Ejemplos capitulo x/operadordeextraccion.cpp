#include <iomanip.h>
char buf[10];
std::cin>>std::setw(10)>>buf;

int main()
{
    char ch;
    while (std::cin>>ch)
    {
        std::cout<<ch;
    }

    return 0;
    
}