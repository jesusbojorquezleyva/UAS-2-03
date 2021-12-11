#include <iostream>
#include "random.hpp"

using Random = effolkronium::random_static;

int main()
{
    std::cout<<Random::get(1,6)<<'\n';
    std::cout<<Random::get(1,10)<<'\n';
    std::cout<<Random::get(1,20)<<'\n';

    return 0;
}