#include <iostream>

unsigned int PRNG()
{
    //nuestre semilla inicial es 5323
    static unsigned int seed{5323};

    //Toma la semilla actual y genera un nuevo valor a partir de ella
    //Debido a nuestro uso de grandes constantes y desbordamiento, seria
    //Es dificil para alguien predecir casualmente cual es el proximo numero
    //va a ser el anterior.
    seed=8253729 * seed + 2396403;

    //Toma la semilla y devuelve el valor entre 0 y 32767
    return seed % 32768;
}

int main()
{
    //imprime 100 numero aleatorios
    for (int count {1}; count <= 100; ++count)
    {
        std::cout<<PRNG<<'\t';

        //si imprimimos 5 numeros, comience una nueva fila
        if (count % 5 == 0)
            std::cout<<'\n';
    }

    return 0;
}