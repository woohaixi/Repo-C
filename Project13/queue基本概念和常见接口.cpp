#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
//只有队头和队尾可以被访问，不允许遍历操作
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
		cout << "队列长度为" << q.size() << endl;
		cout << "队头姓名为" << q.front().m_name << "队头年龄为" << q.front().m_age << endl;
		cout << "队尾姓名为" << q.back().m_name << "队尾年龄为" << q.back().m_age << endl;
		q.pop();
	}


}

int main()
{

	test01();

	return 0;
}