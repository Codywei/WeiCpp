/**
容器定义和初始化
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // 定义main函数返回类型EXIT_FAILURE和EXIT_SUCCESS
#include <cassert> // 定义assert
#include <fstream>
#include <sstream>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::iostream;
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::list;
using std::deque;
using std::array;
using std::forward_list;

typedef string::size_type sz;

int main()
{
	vector<int> vec1;	// 空


	vector<int> vec2(vec1);	// 和vec1一样
	vector<int> vec3 = vec1;// 和vec1一样


	vector<int> vec4(vec1.begin(), vec1.end());	// 也和vec1一样


	vector<int> vec5 = { 1,2,3,4 };	// 1,2,3,4
	vector<int> vec6{ 1,2,3,4 };	// 1,2,3,4


	vector<int> vec7(10);	// 10个零


	vector<int> vec8(10, 10);	// 10个10

	return 0;
}