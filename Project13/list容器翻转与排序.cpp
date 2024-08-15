#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

bool myCompare(int v1,int v2)
{
	//降序，就让第一个数大于第二个数
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

	L1.sort();//此时不支持L1.sort(L1.begin(),L1.end())，因为不支持随机访问
	PrintList(L1);
	//逆序

	L1.sort(myCompare);
	PrintList(L1);

}

int main()
{



	test01();
	return 0;
}