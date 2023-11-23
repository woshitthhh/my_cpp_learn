#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <windows.h> /使代码输出时utf-8编码的一个库
using namespace std;



void set_rand()
{
	int i, j;

	// 设置种子
	srand((unsigned)time(NULL));

	/* 生成 10 个随机数 */
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		j = rand();
		cout << "随机数： " << j << endl;
	}
}

bool is_Prime(int x)
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

int count_primes(int n)
{
	int ans = 0;
	for (int i = 2; i < n; i++)
	{
		ans += is_Prime(i);
	}
	return ans;
}

int main()
{
	//SetConsoleOutputCP(CP_UTF8); //代码输出为UTF-7编码
	int ans1; // 质数
	ans1 = count_primes(10);
	cout << ans1 << endl;
	set_rand();
	system("PAUSE");
}