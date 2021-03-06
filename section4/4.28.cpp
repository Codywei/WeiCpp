/**
sizeof
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
	cout << "bool" << sizeof(bool) << endl
		<< "char" << sizeof(char) << endl
		<< "short" << sizeof(short) << endl
		<< "int" << sizeof(int) << endl
		<< "long" << sizeof(long) << endl
		<< "long long" << sizeof(long long) << endl
		<< "float" << sizeof(float) << endl
		<< "double" << sizeof(double) << endl
		<< "long double" << sizeof(long double) << endl;

	return 0;
}