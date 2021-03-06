/**
指针运算与加号
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//a. *vec.begin()等价于*(vec.begin())
	vector<int> vec{ 6 };
	cout << *vec.begin() << endl;

	//b. *vec.begin()+1 等价于 (*(vec.begin()))+1
	cout << ((*(vec.begin())) + 1) << endl;
	return 0;
}