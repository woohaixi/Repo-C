#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
void PrintSet(set<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;
	for (int i = 1; i <= 4; i++)
	{
		s1.insert(10 * i);
	}
	PrintSet(s1);

	set<int>s2(s1);
	PrintSet(s2);

	set<int>s3;
	s3 = s2;
	PrintSet(s3);
}

int main()
{




	test01();



	return 0;
}