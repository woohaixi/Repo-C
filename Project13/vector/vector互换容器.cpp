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
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "after swap" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
//实际用途：巧用swap可以节约内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v的容量是：" << v.capacity() << endl;
	cout << "v的大小是：" << v.size() << endl;

	v.resize(3);
	cout << "v的容量是：" << v.capacity() << endl;
	cout << "v的大小是：" << v.size() << endl;
	cout << " " << endl;
	//巧用swap收缩内存
	vector<int>(v).swap(v);
	//(v)创建了匿名对象，
	//分配的空间大小实际上是v的实际占用内存大小，之后通过swap交换匿名对象和v，之后系统检测到匿名对象之后就开始释放，因此达到了减小v的内存空间的效果
	cout << "v的容量是：" << v.capacity() << endl;
	cout << "v的大小是：" << v.size() << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}