#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//�ַ�������
void test01()
{
	string str1 = "abcdefg";
	int pos1 = str1.find("cd");
	int pos2 = str1.rfind("cd");
	cout << pos1 << " " << pos2 << endl;
	//rfind�����Ӵ����һ�γ��ֵ�λ��,����������Ȼ�Ǵ�����������
	string str2 = "abcdecdfg";
	int pos3 = str2.find("cd");
	int pos4 = str2.rfind("cd");
	cout << pos3 << " " << pos4 << endl;
}

void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << str1 << endl;
}
int main()
{

	test01();
	test02();
	return 0;
}