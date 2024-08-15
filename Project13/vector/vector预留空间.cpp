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
//vector预留空间
void test01()
{
	vector<int>v;
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0]) 
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;

}

void test02()
{
	vector<int>v;
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		v.reserve(100000);//利用reserve预留空间
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num;

}


int main()
{
	test01();
	test02();
	return 0;
}