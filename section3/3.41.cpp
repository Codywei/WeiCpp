/**
使用数组初始化vector对象
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
	int arr[] = { 1,2,3,4,5 };
	vector<int> ivec(begin(arr), end(arr));
	for (int i : ivec)
		cout << i << endl;
	return 0;
}