#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector<int>& v)
{
	for (auto it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}

	cout << "v1�ĵ�һ��Ԫ��Ϊ" << v1.front() << endl;
	cout << "v1�����һ��Ԫ��Ϊ" << v1.back() << endl;

}
int main()
{

	test01();

	return 0;
}