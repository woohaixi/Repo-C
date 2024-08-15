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
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	/*for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	PrintDeque(d1);

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	PrintDeque(d1);*/

	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
	PrintDeque(d1);
	cout << d1.front() << " " << d1.back() << endl;
}



int main()
{



	test01();
	return 0;
}