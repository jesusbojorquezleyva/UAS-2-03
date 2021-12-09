#include <iostream>
#include<string>
using namespace std;
enum class Animals
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich
};

string getAnimalName(Animals animal)
{
    switch(animal)
    {
        case Animals::pig:
            return "Cerdo";
            break;
        case Animals::chicken:
            return "Pollo";
            break;
        case Animals::goat:
            return "Cabra";
            break;
        case Animals::cat:
            return "Gato";
            break;
        case Animals::dog:
            return "Perro";
            break;
        case Animals::ostrich:
            return "Avestruz";
            break;
        default:
            [[fallthrough]];
            break;
    }
}
string printNumberofLegs(Animals animal)
{
    string cadena{};
     switch(animal)
    {
        case Animals::pig:
            cadena="Un "+getAnimalName(Animals::pig)+" tiene 4 patas";
            break;
        case Animals::chicken:
            cadena= "Un "+getAnimalName(Animals::chicken)+" tiene 2 patas";
            break;
        case Animals::goat:
            cadena="Un "+getAnimalName(Animals::goat)+" tiene 4 patas";
            break;
        case Animals::cat:
            cadena= "Un "+getAnimalName(Animals::cat)+" tiene 4 patas";
            break;
        case Animals::dog:
            cadena="Un "+getAnimalName(Animals::dog)+" tiene 4 patas";
            break;
        case Animals::ostrich:
            cadena="Un "+getAnimalName(Animals::ostrich)+" tiene 2 patas";
            break;
        default:
            cadena="Error";
            break;
        return cadena;
    }
}
int main()
{
    std::cout<<printNumberofLegs(Animals::pig)<<'\n';
    std::cout<<printNumberofLegs(Animals::chicken)<<'\n';
    return 0;
}