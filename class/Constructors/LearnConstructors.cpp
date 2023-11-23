/*------------------------------------------------------------------------------
 * @file    CONSTRUCTORS.CPP
 * @author  ZhouRongTao
 * @date    2023/11/23 13:47:17
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Log //可以创建类的实例，有默认的构造函数
{
public:
    static void print()
    {
    }
};

// class Log //不可创建类的实例，构造函数设置为私有了
// {
// private:
//     Log();
// public:
//     static void print()
//     {
//     }
// };

// class Log //不可创建类的实例，delete了构造函数
// {
// public:
//      Log() = delete;
//     static void print()
//     {
//     }
// };
int main()
{
    Log::print();
    Log l;
}