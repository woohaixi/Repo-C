#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;
void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it!=L.end(); it++)
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

	list<int>L2(L1.begin(), L1.end());
	PrintList(L2);


	list<int>L3(L2);
	PrintList(L3);

	list<int>L4(10, 1000);
	PrintList(L4);



}
int main()
{


	test01();
	return 0;
}