/*------------------------------------------------------------------------------
 * @file    LEARNSTATIC.CPP
 * @author  ZhouRongTao 
 * @date    2023/11/22 09:27:54
------------------------------------------------------------------------------*/
#include <iostream>

void Function() //局部变量和局部静态变量的生命周期与作用域区别。并且注意：局部变量没有设置初值，他在声明时已经自动初始化为0；
{
	int i = 0;
	static int s_i;
	i++;
	s_i++;
	std::cout << "i = " << i << " ";
	std::cout << "s_i = " << s_i << std::endl;
}

int main()
{
	Function();
	Function();
	Function();
	Function();
	Function();
	std::cin.get();
}