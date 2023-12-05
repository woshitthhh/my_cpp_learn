/*------------------------------------------------------------------------------
 * @file    INITIALIZELIST.CPP
 * @author  ZhouRongTao
 * @date    2023/12/05 15:56:24
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Example
{
public:
    Example(int x)
    {
        cout << "Example is " << x << endl;
    }
    Example()
    {
        cout << "Example is " << endl;
    }
};

class Entity
{
public:
    Example m_example;
    Entity() : m_example(Example(10))
    {
    }
};

int main()
{
    Entity e;
}