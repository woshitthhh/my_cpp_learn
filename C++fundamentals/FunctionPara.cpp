#include <iostream>
#include <typeinfo> //类型库，判断变量的类型

using namespace std;

int Swap1(int num1, int num2); // 传值调用
int Swap2(int *num1, int *num2); //指针调用
int Swap3(int &num1, int &num2); //引用调用

int Swap1(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return num1, num2;
}

int Swap2(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return *num1, *num2;
}

int Swap3(int &num1, int &num2) //调用时使用Swap3(a, b)，相当于int &num1 = a, int &num2 = b;这样理解起来很容易。相比于指针调用代码更简洁。
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return num1, num2;
}

int main()
{
    int *c, *d;

    int a = 100, b = 200;
    cout << a << endl;
    cout << b << endl;
    Swap3(a, b);
    cout << a << endl;
    cout << b << endl;

    /*
    c = &a, d = c;
    // cout << typeid(c).name();
    cout << *c << typeid(d).name() << endl;
    */
}