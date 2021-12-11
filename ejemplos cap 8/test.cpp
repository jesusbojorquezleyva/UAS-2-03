#include "constants.h"
#include <iostream>
double getInitialHeigh()
{
    std::cout <<"Ingrese la altura de la torre en metros: ";
    double initialHeight{};
    std::cin>>initialHeight;
    return initialHeight;
}
double calculateHeight(double initialHeight, int secondsPassed)
{
    double distanceFallen{(MyConstants::gravity * secondsPassed * secondsPassed)/2.0};
    double currentHeight{initialHeight-distanceFallen};
    return currentHeight;
}
void printHeight(double height, int secondsPassed)
{
    if(height>0.0)
    {
        std::cout<<"En "<<secondsPassed<<" segundos, la pelota esta en la altura de:\t"<<height<<" metros\n";
    }
    else
    {
        std::cout<<"En "<<secondsPassed<<" segundos, la pelota esta en el suelo.\n";
    }
}
void calculateAndPrintHeight(double initialHeight, int secondsPassed)
{
    double height{calculateHeight(initialHeight,secondsPassed)};
    printHeight(height, secondsPassed);
}
int main()
{
    const double initialHeight{getInitialHeigh()};
    for (int i=0; i<=5; i++)
    {
        calculateAndPrintHeight(initialHeight,i);
    }

    return 0;
}