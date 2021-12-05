enum Color
{
    color_black,
    color_red,
    color_blue,
    color_green,
    color_white,
    color_cyan,
    color_yellow,
    color_magenta,
};

int main()
{
    Color paint = color_white;
    Color house(color_blue);
    Color apple{color_red};
}