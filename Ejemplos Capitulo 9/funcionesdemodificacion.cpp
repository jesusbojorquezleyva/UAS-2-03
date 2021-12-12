#include <iostream>
#include <string_view>

int main()
{
    std::string_view str{"Manzana"};

    std::cout<<str<<'\n';

    str.remove_prefix(1);

    std::cout<<str<<'\n';

    str.remove_prefix(2);

    std::cout<<str<<'\n';
    
    return 0;
}