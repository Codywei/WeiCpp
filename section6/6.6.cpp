/**
局部变量
*/
#include "cody.h"
int showCalledCountFact(int num)
{
	static size_t ctr = 0;
	cout << "calling time: " << ++ctr << endl;
	int ret = 1;
	while (num > 1)
		ret *= num--;
	return ret;
}
int main()
{
	// 形参由实参初始化，生命周期为函数体
	// 局部变量可以不初始化，从而拥有一个未定义的值，生命周期为声明遇到到函数结尾
	// 局部静态变量可以不初始化，将执行值初始化，内置类型为0，声明周期为函数调用到程序结束
	for (size_t i = 0; i != 10; ++i)
	{
		cout << i << "! is: " << showCalledCountFact(i) << endl;
	}
	return 0;
}