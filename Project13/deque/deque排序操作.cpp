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
	PrintDeque(d1);
	sort(d1.begin(), d1.end());//默认升序排序
	//对于支持随机访问的迭代器的容器，都可以使用sort算法进行排序
	PrintDeque(d1);


}




int main()
{




	test01();
	return 0;
}