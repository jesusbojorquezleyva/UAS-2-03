int main()
{
    char strBuf[100];
    std::cin.getline(strBuf,100);
    std::cout<<strBuf<<'\n';
    std::cout<<std::cin.gcount()<<" Caracteres fueron leidos"<<'\n';

    return 0;
}