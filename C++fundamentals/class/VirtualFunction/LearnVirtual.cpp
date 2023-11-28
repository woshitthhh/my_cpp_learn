/*------------------------------------------------------------------------------
 * @file    LEARNVIRTUAL.CPP
 * @author  ZhouRongTao
 * @date    2023/11/26 11:18:49
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Printable
{
public:
    virtual string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual string GetName() { return "Entity"; }
    string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
public:
    string m_Name;

public:
    Player() {}
    Player(const string &name) : m_Name(name) {}
    string GetName() override { return m_Name; }
    string GetClassName() override { return "player"; } // 不在子类中重写虚函数，默认访问父类的虚函数
};

void PrintName(Entity *entity)
{
    cout << entity->GetName() << endl;
}

void PrintClassName(Printable *obj)
{
    cout << obj->GetClassName() << endl;
}

int main()
{
    // Entity e; //虚函数必须由基类指针进行访问，对象名加点运算符访问虚函数时静态调用，不会用到虚函数的特性
    // cout << e.GetName() << endl;
    // PrintName(e);

    // Player p("zhou");
    // Entity *e = &p; // 定义指向Player对象的基类指针，这样才能展现出虚函数的特点，但是e指针仍然只能访问Entity类的方法
    // cout << e->GetName() << endl;

    Entity *e = new Entity();
    PrintClassName(e);

    Entity *e1 = new Player("zhou"); //指向Player对象的Entity类指针，只能访问Entity类的属性和方法
    PrintClassName(e1);
    cout << e1->GetName() <<endl;

    Player *p = new Player("tao"); //指向Player对象的Player类指针，只能访问Player类的属性和方法
    PrintClassName(p);
    cout << p->m_Name << endl;
}