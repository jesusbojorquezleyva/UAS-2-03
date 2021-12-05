#include <iostream>
#include <string>
using namespace std;
enum Monstertype
{
    typeOgre,
    typeDragon,
    typeOrc,
    typeGiantSpider,
    typeSlime
};

struct Monsters
{
    Monstertype  Monstype;
    string Name;
    int HP;
};
string nametype(Monstertype monst)
{
    if (monst==typeOgre)
        return "Ogro";
    if (monst==typeDragon)
        return "Dragon";
    if (monst==typeOrc)
        return "Orco";
    if (monst==typeGiantSpider)
        return "Araña Gigante";
    if(monst==typeSlime)
        return "Slime";
    else
        return "Missigno";

}
void printMonster(Monsters monst)
{
    cout<<"Este "<<nametype(monst.Monstype)<<" se llama "<<monst.Name<<" y tiene "<<monst.HP<<" puntos de salud.\n";
}
int main()
{
    Monsters monstruo1{typeOgre,"Torg",145};
    Monsters monstruo2{typeSlime,"Blurp",23};
    printMonster(monstruo1);
    printMonster(monstruo2);

    return 0;
}