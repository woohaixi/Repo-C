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
//ʵ����;������swap���Խ�Լ�ڴ�ռ�
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v�������ǣ�" << v.capacity() << endl;
	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;

	v.resize(3);
	cout << "v�������ǣ�" << v.capacity() << endl;
	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
	cout << " " << endl;
	//����swap�����ڴ�
	vector<int>(v).swap(v);
	//(v)��������������
	//����Ŀռ��Сʵ������v��ʵ��ռ���ڴ��С��֮��ͨ��swap�������������v��֮��ϵͳ��⵽��������֮��Ϳ�ʼ�ͷţ���˴ﵽ�˼�Сv���ڴ�ռ��Ч��
	cout << "v�������ǣ�" << v.capacity() << endl;
	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}