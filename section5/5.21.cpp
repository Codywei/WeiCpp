/**
改写5.20
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
	string prev;
	string now;
	while (cin >> now)
	{
		if (now.empty() || !isupper(now[0]))
			continue;
		if (now == prev)
			break;
		prev = now;
	}
	cout << prev << endl;
	return 0;
}