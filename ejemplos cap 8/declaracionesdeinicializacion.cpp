#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName{};
    string lastName{};
    cout<<"Nombre: ";
    cin>>firstName;

    cout<<"Apellido: ";
    cin>>lastName;

    if (string fullname{firstName+ ' '+lastName}; fullname.length()>20)
    {
        cout<<""fullname<<"\"es demasiado largo!\n";
    }
    else
    {
        cout<<"Tu nombre es "<<fullname<<'\n';
    }
    //aqui ya no ocupara la variable @fullname
}