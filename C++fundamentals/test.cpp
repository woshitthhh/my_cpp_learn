#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <windows.h> /ʹ�������ʱutf-8�����һ����
using namespace std;



void set_rand()
{
	int i, j;

	// ��������
	srand((unsigned)time(NULL));

	/* ���� 10 ������� */
	for (i = 0; i < 10; i++)
	{
		// ����ʵ�ʵ������
		j = rand();
		cout << "������� " << j << endl;
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
	//SetConsoleOutputCP(CP_UTF8); //�������ΪUTF-7����
	int ans1; // ����
	ans1 = count_primes(10);
	cout << ans1 << endl;
	set_rand();
	system("PAUSE");
}