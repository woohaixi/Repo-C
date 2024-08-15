#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//栈容器不允许遍历
//栈容器先进后出
//栈可以判空empty()、返回元素个数size()
void test01()
{
	stack<int>s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	while (!s1.empty())
	{
		cout << "栈的大小为" << s1.size() << endl;
		cout<<"出栈元素为"<<s1.top()<<endl;
		s1.pop();
	}
	cout << "栈的大小为" << s1.size() << endl;
}

int main()
{


	test01();


	return 0;
}