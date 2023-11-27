/*------------------------------------------------------------------------------
 * @file    LEARNVIRTUAL.CPP
 * @author  ZhouRongTao
 * @date    2023/11/26 11:18:49
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Entity
{
public:
    virtual string GetName()
    {
        return "Entity";
    }
};

class Player : public Entity
{
private:
    string m_Name;

public:
    Player(const string &name) : m_Name(name) {}
    string GetName() override { return m_Name; }
};

void PrintName(Entity *entity)
{
    cout << entity->GetName() << endl;
}

int main()
{
    // Entity e; //虚函数必须由基类指针进行访问，对象名加点运算符访问虚函数时静态调用，不会用到虚函数的特性
    // cout << e.GetName() << endl;
    // PrintName(e);
    
    Player p("zhou"); 
    Entity *e = &p; //定义指向Player对象的基类指针，这样才能展现出虚函数的特点
    cout << e->GetName() << endl;
}