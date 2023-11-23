#include <iostream>

using namespace std;

int main()
{
    int b = 100;
    int &a = b; //引用不能改变，只能在声明时就定义。
    cout << &a << endl;
    cout << &b << endl;
    a++;
    cout << a << ' ' << b << endl;
}