//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	[=] () mutable {cout <<"i : " <<++i; }(); //x,y�� ���� ����ϴ� ���ٽ�
//	cout << ">>i : " << i << endl;
//
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	auto love = [](string a, string b) { cout << a << "���� " << b << "�� ����" << endl; };
	love("��", "��");
	love("�ø�", "����");

	return 0;
}