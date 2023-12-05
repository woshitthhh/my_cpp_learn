/*------------------------------------------------------------------------------
 * @file    LEARNSTRING.CPP
 * @author  ZhouRongTao
 * @date    2023/11/28 16:01:56
------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;
#include <array>
int main()
{
    string name = "zhou";
    name += "hello";
    cout << name << endl;
    cout << name.size() << endl;
    int *p;
    cout << sizeof(*p) << endl;
}