#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

bool myCompare(int v1,int v2)
{
	//���򣬾��õ�һ�������ڵڶ�����
	return v1 > v2;
}

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(50);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	PrintList(L1);

	L1.reverse();
	PrintList(L1);

	L1.sort();//��ʱ��֧��L1.sort(L1.begin(),L1.end())����Ϊ��֧���������
	PrintList(L1);
	//����

	L1.sort(myCompare);
	PrintList(L1);

}

int main()
{



	test01();
	return 0;
}