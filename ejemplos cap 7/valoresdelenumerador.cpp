#include<iostream>
enum Color
{
    color_black,//0
    color_red,//1
    color_blue,//2
    color_green,//3
    color_white,//4
    color_cyan,//5
    color_yellow,//6
    color_magenta//7
};

Color paint{color_white};
std::cout<<paint;