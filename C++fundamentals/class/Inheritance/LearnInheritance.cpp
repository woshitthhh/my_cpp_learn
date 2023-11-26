/*------------------------------------------------------------------------------
 * @file    LEARNINHERITANCE.CPP
 * @author  ZhouRongTao
 * @date    2023/11/23 14:40:23
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Entity
{
public:
    float X, Y;
private:
    double a = 10; //基类的私有成员对于派生类不能被派生类直接访问，但是可以通过基类的公有或保护成员进行访问
public:
    void Move(float x, float y)
    {
        X += x + a;
        Y += y;
    }
    void PrintPosition()
    {
        cout << "X = " << X << " y = " << Y << endl;
    }
};

class Player : public Entity
{
public:
    const char *name;
    void PrintName()
    {
        cout << "player's name = " << name;
    }
};

int main()
{
    Player player;
    player.X = 2;
    player.Y = 5;
    player.Move(10, 5);
    player.PrintPosition();
    player.name = "lihua";
    player.PrintName();
}