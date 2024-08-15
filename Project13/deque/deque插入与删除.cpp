#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)//const修饰变为只读状态之后，相应的迭代器iterator要变为const_iterator
	{
		//*it = 100;const修饰后进入只读状态，不能够修改了
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	PrintDeque(d1);

	d1.pop_back();
	d1.pop_front();
	PrintDeque(d1);

}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	PrintDeque(d1);
	d1.insert(d1.begin(), 1000);
	PrintDeque(d1);
	d1.insert(d1.begin(), 2, 10000);
	PrintDeque(d1);
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	PrintDeque(d1);
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	/*d1.erase(d1.begin());
	PrintDeque(d1);*/
	/*deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	PrintDeque(d1);*/

	d1.erase(d1.begin() + 1, d1.end() - 1);
	PrintDeque(d1);
}
int main()
{


	/*test01();
	test02();*/
	test03();
	return 0;
}