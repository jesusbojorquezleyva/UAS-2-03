switch (2)
{
    case 1:// no coincide
        std::cout<<1<<'\n';//se salta
        break;
    case 2://coincide!
        std::cout<<2<<'\n';//execute begins here
        break;//break termina la declaracion switch
    case 3:
        std::cout<<3<<'\n';
        break;
    case 4:
        std::cout<<4<<'\n';
        break;
    default:
        std::cout<<5<<'\n';
        break;
}