#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
void PrintDeque(const deque<int>&d)
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
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	PrintDeque(d2);

	deque<int>d3(10, 100);
	PrintDeque(d3);

	deque<int>d4(d3);
	PrintDeque(d4);
}



int main()
{



	test01();

	return 0;
}