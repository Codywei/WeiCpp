#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
/**
�������������ʽ
*/
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int grade;
	cin >> grade;
	const vector<string> scores = { "F","D","C","B","A","A++" };
	string lettergrade;
	lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10] + (grade % 10 < 3 ? "-" : (grade % 10 > 7 ? "+" : ""));
	//if (grade < 60)
	//{
	//	lettergrade = scores[0];
	//}
	//else
	//{
	//	lettergrade = scores[(grade - 50) / 10];
	//	if (grade % 10 < 3)
	//		lettergrade += '-';
	//	else if (grade % 10 > 7)
	//		lettergrade += '+';
	//}
	cout << lettergrade << endl;
	system("pause");
	return 0;
}