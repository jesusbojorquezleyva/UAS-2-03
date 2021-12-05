#include<iostream>

struct Employee
{
    short id;
    int age;
    double wage;
};

int main()
{
    std::cout<<"El tamaño de Employee es "<<sizeof(Employee)<<'\n';

    return 0;
}