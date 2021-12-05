enum Color
{
    red,
    blue,//blue esta en el global namespace
    green
};

enum Feeling
{
    happy,
    tired,
    blue//error, blue ya esta siendo usado en el enum Color en el global namespace
};