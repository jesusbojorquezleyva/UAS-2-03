float *ptr{0};//ptr ahora es un puntero nulo

float *ptr2;//ptr2 no esta inicializado
ptr2=0;//ptr2 ahora es un puntero nulo

double *ptr{0};

if (ptr)
    std::cout<<"ptr esta apuntando a un valor double.";
else
    std::cout<<"ptr es nulo.";

//mejores practicas: inicialice sus punteros a un valor nulo si no les esta dando otro valor

