#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
//ֻ�ж�ͷ�Ͷ�β���Ա����ʣ��������������
class Person
{
public:
	int m_age;
	string m_name;
	Person(int age, string name)
	{
		this->m_age = age;
		this->m_name = name;
	}

};
void test01()
{
	queue<Person>q;
	Person p1(10,"xiaohong");
	Person p2(20, "xiaoli");
	Person p3(30, "xiaoming");
	q.push(p1);
	q.push(p2);
	q.push(p3);
	while (!q.empty())
	{
		cout << "���г���Ϊ" << q.size() << endl;
		cout << "��ͷ����Ϊ" << q.front().m_name << "��ͷ����Ϊ" << q.front().m_age << endl;
		cout << "��β����Ϊ" << q.back().m_name << "��β����Ϊ" << q.back().m_age << endl;
		q.pop();
	}


}

int main()
{

	test01();

	return 0;
}