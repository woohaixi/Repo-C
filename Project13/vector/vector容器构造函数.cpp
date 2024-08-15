#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector<int>& v)
{
	for (auto it = v.begin(); it < v.end(); it++)//auto it=vector<ElemType>::iterator it
	{
		cout << *it << " " ;
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
	printVector(v1);
	vector<int>v2(v1.begin(), v1.end());//左闭右开
	printVector(v2);
	vector<int>v3(10, 100);
	printVector(v3);
	vector<int>v4(v3);//拷贝构造最常用
	printVector(v4);
}

int main()
{
	test01();



	return 0;
}