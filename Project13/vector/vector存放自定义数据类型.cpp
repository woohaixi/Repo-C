#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 10);
	Person p3("ccc", 10);
	Person p4("ddd", 10);
	Person p5("eee", 10);
	//想容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名" << (*it).m_name<<"年龄"<<(*it).m_age << endl;
	}
}
void test02()
{
	vector<Person*>v;
	Person p1("aaa", 10);
	Person p2("bbb", 10);
	Person p3("ccc", 10);
	Person p4("ddd", 10);
	Person p5("eee", 10);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->m_age << " " << (*it)->m_name << endl;
	}
}
int main()
{
	test01();
	test02();
	return 0;
}