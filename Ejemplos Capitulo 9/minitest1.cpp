#include <iostream>
namespace Animals
{
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake
    };
}
void numberOfLegs(int variable)
{
    if(variable==Animals::chicken)
        std::cout<<"El pollo tienes 2 patas";
    else if( variable==Animals::dog)
        std::cout<<"El perro tiene 4 patas";
    else if(variable==Animals::cat)
        std::cout<<"El gato tiene 4 patas";
    else if(variable==Animals::elephant)
        std::cout<<"El elefante tiene 4 patas";
    else if(variable==Animals::duck)
        std::cout<<"El pato tiene 2 patas (mujeriego el chavon)";
    else
        std::cout<<"La sepiente no tiene patas, se arrastra";
}
int main()
{
    double highTemperature[365]{0.0};
    int Animales[6]{Animals::chicken,Animals::dog,Animals::cat,Animals::elephant,Animals::duck,Animals::snake};

    numberOfLegs(Animales[3]);
}