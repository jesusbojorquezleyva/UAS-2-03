int value{5};
std::cout<<&value;//imprime la direccion del valor
std::cout<<value;//imprime contenidos de valor

int *ptr{&valor};//ptr apunta al valor
std::cout<<ptr;//imprime la direccion contenida en ptr, que es &value
std::cout<<*ptr;//indireccion a traves de ptr (obtiene el valor que apunta a ptr)

//apart
int value1{5};
int value2{7};

int *ptr {};

ptr=&value1;//ptr apunta al value1
std::cout<< *ptr;//imprime 5

ptr=&value2;//prt ahora apunta a value2
std::cout<<*ptr;//imprime 7

//aparte
int value{5};
int *ptr{&value};

*ptr=7;
std::cout<<value<<'\n';


