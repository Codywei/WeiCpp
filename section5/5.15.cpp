/**
for循环使用场景
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
	//a. for循环sz次

	//for (int ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	// ix是定义在for循环内的，所以循环外的if语句不能访问ix
	// 修改：
	//int ix;
	//for (ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	//b. for循环sz次...

	//int ix;
	//for (ix != sz; ++ix) { /*...*/ }

	// ix没有初始化;
	// 修改

	//int ix=0;
	//for (; ix != sz; ++ix) { /*...*/ }

	//c. for循环sz次
	//for (int ix = 0; ix != sz; ++ix, ++sz) {/*...*/ }

	
	// 修改
	//for (int ix = 0; ix != sz; ++ix) {/*...*/ }

	
	return 0;
}