#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;
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
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	cout << L1.front() << " " << L1.back() << endl;
	//�������������ź�at��������listԪ��
	for (list<int>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << *it <<" ";//ֻ�����η���
	}
	cout << endl;
}

int main()
{


	test01();
	return 0;
}