#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//ջ�������������
//ջ�����Ƚ����
//ջ�����п�empty()������Ԫ�ظ���size()
void test01()
{
	stack<int>s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	while (!s1.empty())
	{
		cout << "ջ�Ĵ�СΪ" << s1.size() << endl;
		cout<<"��ջԪ��Ϊ"<<s1.top()<<endl;
		s1.pop();
	}
	cout << "ջ�Ĵ�СΪ" << s1.size() << endl;
}

int main()
{


	test01();


	return 0;
}