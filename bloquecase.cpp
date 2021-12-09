switch(1)
{
    case 1:
    {//definimos un bloque
        int x{4};//ok, las variables pueden ser inicializadas en un bloque cas
        std::cout<<x;
        break;

    }
    default:
        std::cout<<"default case\n";
        break;
}