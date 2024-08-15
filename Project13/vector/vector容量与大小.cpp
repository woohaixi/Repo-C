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
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1为空";
	}
	else
	{ 
		cout << "v1不为空" << endl;
	    cout <<"v1的容量为"<< v1.capacity() << endl;
		cout << "v1的大小为" << v1.size() << endl;
		v1.resize(15);
		cout << "v1的大小为" << v1.size() << endl;
		v1.resize(20,4);
		printVector(v1);
		v1.resize(9);
		printVector(v1);//超出的部分会被删除
	}
}


int main()
{
	test01();


	return 0;
}