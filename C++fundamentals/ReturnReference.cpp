#include <iostream>

using namespace std;

double nums[] = {10, 23.2, 25.3, 23.1, 0.2};

double &setValues(int i) //返回的是nums[i]的引用
{
    double &ref = nums[i];
    return ref;
}

int main()
{
    setValues(1) = 20.23; // 改变第 2 个元素
    setValues(3) = 70.8;  // 改变第 4 个元素

    cout << "改变后的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "nums[" << i << "] = ";
        cout << nums[i] << endl;
    }
    return 0;
}
