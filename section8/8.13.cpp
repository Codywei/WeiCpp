/**
ostringstream
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

typedef string::size_type sz;

struct PersonInfo {
	string name = "ha";
	vector<string> phones;
};

bool valid(const string &nums)
{
	if (nums.length() == 11)
		return true;
	return false;
}

string format(const string &nums)
{
	string result(nums);
	result.insert(3, "-").insert(7, "-");
	return result;
}

int main()
{
	string fileIn = "8.13test1.txt";
	string fileOut = "8.13test2.txt";

	ifstream ifile(fileIn);
	ofstream ofile(fileOut, fstream::app);

	if (!ifile || !ofile)
	{
		cerr << "Open file error!" << endl;
		return EXIT_FAILURE;
	}

	string line, word;
	vector<PersonInfo> people;
	// 逐行从输入读取数据，直至cin遇到文件尾(或其他错误)
	while (getline(ifile, line)) {
		PersonInfo info;
		istringstream record(line); // 将记录绑定到刚读入的行
		record >> info.name;
		// 当line中的数据全部读出后，同样会触发"文件结束"信号，在record上的下一个输入操作会失败
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	ifile.close();

	for (const auto &entry : people) { // 对people中每一项
		ostringstream formatted, badNums; // 每个循环步创建的对象
		for (const auto &nums : entry.phones) { // 对每个数
			if (!valid(nums)) {
				badNums << " " << nums; // 将数的字符串形式存入badNums
			}
			else
				// 将格式化的字符串"写入"formatted
				formatted << " " << format(nums);
		}
		if (badNums.str().empty()) // 没有错误的数
			ofile << entry.name << " " << formatted.str() << endl;
		else // 否则，打印名字和错误的数
			cerr << "input error: " << entry.name << " invalid number(s)" << badNums.str() << endl;
	}
	ofile.close();

	return 0;
}