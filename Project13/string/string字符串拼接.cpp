#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str1 = "i";
	string str2 = "loveyoubetterthanher";
	str1.append(str2, 0, 4);
	cout << str1;
}

int main()
{

	test01();

	return 0;
}