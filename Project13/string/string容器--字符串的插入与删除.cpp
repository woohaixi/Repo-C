#include<iostream>
#include<string>
using namespace std;
//�ַ����Ĳ�����ɾ��
void test01()
{
	string str = "hello";
	//����
	str.insert(1, "111");
	cout << str << endl;
	str.erase(1, 3);
	cout << str << endl;
}
int main()
{

	test01();

	return 0;
}