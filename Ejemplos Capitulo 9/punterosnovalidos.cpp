#include <iostream>
//lo veremos despues. No se preocupe por ahora,
//solo lo usamos para engalar al compilador para que piense que p tiene un valor.
void foo(int *&)
{
    //p es una referencia a un puntero.
    //Estamos usando estoa para enganar al compilador haciendole pensar que p podria modificarse,
    //por lo que no se quejara que p no este inicializad.
    //esto no es algo que quieras hacer intencionalmente.
}

int main()
{
    int *p;//crea un puntero no inicializado(que apunta  basura)
    foo(p);//enganar al compilador para que piense que vamos a asignarle un valor valido

    std::cout<<*p<<'\n';//indireccion a traves del puntero basura

    return 0;
}