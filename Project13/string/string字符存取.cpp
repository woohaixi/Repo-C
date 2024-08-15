#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str1 = "hello";
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << " " ;
	}
	cout << endl;
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << " ";
	}
	cout << endl;
	str1[0] = 'x';
	cout << str1;
	str1.at(1) = 'x';
	cout << endl;
	cout << str1 << endl;

}
int main()
{

	test01();

	return 0;
}