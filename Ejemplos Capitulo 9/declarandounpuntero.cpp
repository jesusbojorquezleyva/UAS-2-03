int *iPtr{};//puntero a un valor entero
double *dPtr{};//un puntero a un valor double

int* iPtr2{};// tambien sintaxis valida (aceptable, pero no favorecida)
int * iPtr3{};//tambien sintaxis valida(pero no hagas esto, parece una multiplicacion)

int *iPtr4{}, *iPtr5{};// declara dos punteros a variabes enteras (no recomendado)

int v{5};
int * ptr{&v}; //inicializar ptr con la direccion de la variable v