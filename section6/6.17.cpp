/**
��Ҫ���޸Ĳ�ʹ��const,ʹ��const���������޸�
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
bool IsHaveUpper(const string &s)
{
	auto it = s.begin();
	while (it != s.end())
	{
		if (isupper(*it++))
			return true;
	}
	return false;
}
void ToLower(string &s)
{
	auto it = s.begin();
	while (it != s.end())
	{
		*it = tolower(*it);
		++it;
	}
}
int main()
{
	string s = "AbdD";
	ToLower(s);
	cout << s << endl;
	return 0;
}