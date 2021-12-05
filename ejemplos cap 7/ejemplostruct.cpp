#include <iostream>
struct Employee
{
    short id;
    int age;
    double wage;
};

Employee joe;
Employee maria;

int main()
{
    joe.id=14;
    joe.age=32;
    joe.wage=24.15;

    maria.id=15;
    maria.age=28;
    maria.wage=18.27;

    int totalAge(joe.age + maria.age);

    if(joe.wage > maria.wage)
        std::cout<<"Joe gana mas que Maria\n";
    else if (joe.wage < maria.wage)
        std::cout<<"Joe gana menos que Maria\n";

    //maria tiene un aumento

    maria.wage+=2.50;

    // cumpleaños de joe
    ++joe.age;
}