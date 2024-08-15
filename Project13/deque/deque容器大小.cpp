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
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{ 
		cout << "d1不为空" << endl;
	    cout <<"d1的大小为" << d1.size() << endl;
	}

	d1.resize(15);
	PrintDeque(d1);
	d1.resize(5);
	PrintDeque(d1);
	d1.resize(15,100);
	PrintDeque(d1);

	deque<int>d2;
	deque<int>d3;
	deque<int>d4;
}



int main()
{

	test01();


	return 0;
}