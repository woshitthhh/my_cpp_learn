#include <iostream>
using namespace std;

// 函数声明
double getAverage(int *arr, int size);

int main()
{
  // 带有 5 个元素的整型数组
  int balance[5] = {1000, 2, 3, 17, 50}; //balance实际上是个指针，指向数组的首地址，sizeof(balance)表示整个数组所占字节数
  double avg;
  cout << sizeof(balance)/sizeof(balance[0]) << endl;
  // 传递一个指向数组的指针作为参数
  avg = getAverage(balance, 5);

  // 输出返回值
  cout << "Average value is: " << avg << endl;

  return 0;
}

double getAverage(int *arr, int size)
{
  int i, sum = 0;
  double avg;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }

  avg = double(sum) / size;

  return avg;
}