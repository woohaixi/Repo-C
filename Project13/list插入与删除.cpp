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
	
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	PrintList(L1);

	L1.pop_back();
	PrintList(L1);

	L1.pop_front();
	PrintList(L1);

	L1.insert(L1.begin(), 1000);
	PrintList(L1);

	list<int>::iterator it = L1.begin();
	L1.insert(++it, 1100);//直接使用L1.begin()+1会报错
	PrintList(L1);

	it = L1.begin();
	L1.erase(it);
	PrintList(L1);

	//移除
	L1.remove(10);
	PrintList(L1);
}

int main()
{


	test01();


	return 0;
}