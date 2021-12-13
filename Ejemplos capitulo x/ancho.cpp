std::cout<<-12345<<'\n';
std::cout<<std::setw(10)<<-12345<<'\n';
std::cout<<std::setw(10)<<left<<-12345<<'\n';
std::cout<<std::setw(10)<<right<<-12345<<'\n';
std::cout<<std::setw(10)<<internal<<-12345<<'\n';
// hay dos formas de introducir datos en un flujo de cadena
//utilizando el operador de insercion (<<)
std::stringstream os;
os<<"reprobaran!"<<'\n';//inserta "reprobaran!" en stringstream

//utilice la funcion str(string) para establecer el valor del bufer:
std::stringstream os;
os.str("reprobaran!");//inserta "reprobaran!" en stringstream



//hay 2 formas de obtener datos de un flujo de cadenas
//utilice la funcion str() para recuperar los resultados del bufer:
std::stringstream os;
os<<"12345 67.89"<<'\n';
cout<<os.str();

//utilice el operador de extraccion(>>):
std::stringstream os;
os<<"12345 67.89";
std::string strValue;
os>>strValue;
std::string strValue2;
os>>strValue2;
std::cout<<strValue<<" - "<<strValue2<<'\n';

