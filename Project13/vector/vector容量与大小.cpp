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
		cout << "v1Ϊ��";
	}
	else
	{ 
		cout << "v1��Ϊ��" << endl;
	    cout <<"v1������Ϊ"<< v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
		v1.resize(15);
		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
		v1.resize(20,4);
		printVector(v1);
		v1.resize(9);
		printVector(v1);//�����Ĳ��ֻᱻɾ��
	}
}


int main()
{
	test01();


	return 0;
}