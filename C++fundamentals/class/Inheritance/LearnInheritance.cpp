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

public:
    void Move(float x, float y)
    {
        X += x;
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