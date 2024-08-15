#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
void test01()
{
	pair<string, int>p("Tom", 20);
	cout << "姓名：" << p.first << "年龄:" << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry", 10);
	cout << "姓名：" << p2.first << "年龄:" << p2.second << endl;

}

void test02()
{
	set<int>s;
	s.insert(10);
	pair<set<int>::iterator, bool>ret = s.insert(10);

	if (ret.second)
	{
		cout <<"success" << endl;
	}
	else
	{
		cout << "failure" << endl;
	}

}
int main()
{



	test01();
	test02();
	return 0;
}