#include <iostream>

int main()
{
    enum Color
    {
        color_red,
        color_blue
    };

    enum Fruit
    {
        fruit_banana,
        fruit_apple
    };

    Color color{color_red};
    Fruit fruit{fruit_banana};

    if (color==fruit)//el compilador comparara a y b como int
        std::cout<<"color y fruta son iguales\n";
    else
        std::cout<<"color y fruta no son iguales\n";

    return 0;

}