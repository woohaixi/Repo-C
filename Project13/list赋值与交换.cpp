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
	PrintList(L1);

	list<int>L2;
	L2 = L1;
	PrintList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	PrintList(L3);

	list<int>L4;
	L4.assign(10, 100);


}

void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList(L1);

	list<int>L2;
	L2.assign(10, 100);
	PrintList(L2);

	L1.swap(L2);

	PrintList(L1);
	PrintList(L2);

}


int main()
{
	//test01();
	test02();
	return 0;
}