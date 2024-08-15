#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector<int>& v)
{
	for (auto it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	//β��
	for (int i = 1; i <= 5; i++)
	{
		v1.push_back(10 * i);
	}
	printVector(v1);
	v1.pop_back();
	printVector(v1);
	v1.insert(v1.begin(), 100);
	printVector(v1);
	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);
	v1.erase(v1.begin());
	printVector(v1);
	v1.erase(v1.begin(), v1.end()-1);
	printVector(v1);
	v1.clear();
	printVector(v1);
}

int main()
{

	test01();
	return 0;
}