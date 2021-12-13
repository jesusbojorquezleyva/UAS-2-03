//asumimos que iofile es un objeto de tipo fstream
/*iofile.seekg(iofile.tellg(),ios::beg)//busca la posicion actual del archivo*/

int main()
{
    std::cerr<<"Uh oh, Sample.dat no se puede abrir!\n";
    return 1;

    char chChar{};//para leer caracter por caracter
    while (iofile.get(chChar))//leer mientras se pueda
    {   
        switch(chChar)
        {//si encontramos una vocal
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':

            iofile.seekg(-1,std::ios::cur);
            iofile<<'#';
            iofile.seekg(iofile.tellg(), std::ios::beg);

            break;
        }
    }
    return 0;
}

return 0;