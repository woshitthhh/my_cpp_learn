/*------------------------------------------------------------------------------
 * @file    LEARNCONST.CPP
 * @author  ZhouRongTao
 * @date    2023/12/05 12:52:32
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Entity
{
public:
    int m_X, m_Y;
    mutable int var;

private:
    int Get() const // 类成员函数的const用法，代表在成员函数中不能修改类的成员变量
    {
        m_X = 2; // 错误，不能修改类的成员变量
        var = 3;
        return m_X;
    }
};

void PrintEntity(const Entity &e)
{
    cout << e.m_X << endl;
}

int main()
{
    const int MAX_AGE = 90;
    const int *a = new int(5); // a所指向的内存所存储的内容不能改变，但可以改变a的指向
    //*a = 2;                    // 错误，不能改变a指向的内存存的内容
    a = (int *)&MAX_AGE;       // 正确，可以改变a的指向

    int *const b = new int(5); // a的指向不能改变，但可以改变a指向的内存的内容
    //b = &MAX_AGE;              // 错误，不能改变a的指向
    *b = 30;                   // 正确，可以改变b指向的内存的内容

    Entity e;
    PrintEntity(e);
}
