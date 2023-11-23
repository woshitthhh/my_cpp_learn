/*------------------------------------------------------------------------------
 * @file    LEARNENUM.CPP
 * @author  ZhouRongTao
 * @date    2023/11/23 11:41:39
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

enum enumType
{
    Monday,
    Tuesday,
    Wedesday,
    Thursday,
    Frday,
    Saturday,
}; // 默认是0-6，但是可以显式的设置：Monday = 1, Tuesday = 2, Wedesday = 3, Thursday, Frday, Saturday,未初始化的枚举值默认比前一个大1

int main()
{
    enumType Weekday;

    // 只能将定义的枚举量赋给该种枚举的变量，不能将其他值赋给枚举变量，例：Weekday = 10是非法的
    Weekday = Monday;

    // 但是可以将枚举量赋给非枚举变量，编译器自动把枚举量转换为int型
    int a = Monday;

    // 枚举变量没有算术运算，即Weekday = Monday + Tuesday; Weekday++ 是非法的，枚举量只有赋值运算。

    // 枚举量可以参与其他类型变量的运算，编译器自动把枚举量转换为int型
    a = 1 + Monday;

    // 可以通过强制类型转换，将其他类型赋值给枚举变量，等价于Weekday = Wednesday，但是对于Weekday = enumType(20)，结果是不确定的，一般不建议这么做
    // 枚举取值范围，枚举上限为最大枚举量的最小2的幂减一，枚举下限：若最小值不小于0，下限取0；若最小值小于0，枚举下限是小于最小枚举量的最大的2的幂加一

    Weekday = enumType(100);
    cout << Weekday << endl;
    Weekday = enumType(2);
}