std::stringstream os;

int nValue{12345};
double dValue{67.89};

os<<nValue<<' '<<dValue;

std::string strValue1,strValue2;
os>>strValue1>>strValue2;

std::cout<<strValue1<<' '<<strValue2<<'\n';

//ahora con una cadena numerica en un numero:
std::stringstream os;
os<<"12345 67.89";
int nValue;
double dValue;

os>>nValue>>dValue;

cout<<nValue<<' '<<dValue<<'\n';

//borrar un flujo de strings para su reutilizacion
std::stringstream os;
os<<"Hola ";

os.str("");//borra el buffer

os<<"Mundo...cruel!";
std::cout<<os.str();

//configurelo en la cadena vacia usando str() con un objeto std::string en blanco:
std::stringstream os;
os<<"Hola ";

os.str(std::string{});

os<<"Mundo...cruel!";
cout<<os.str();

//funcion clear();
std::stringstream os;
os<<"Hola ";

os.str("");
os.clear();

os<<"Mundo...cruel!";
std::cout<<os.str();


