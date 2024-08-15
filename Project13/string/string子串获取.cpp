#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << subStr << endl;
}
void test02()
{
	string email = "hello@qq.com";
	int pos = email.find("@");
	cout << pos << endl;
	string subStr = email.substr(0,pos);
	cout << subStr << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}