#include <iostream>
using namespace std;

//class Restaurant {
//public:
//	int Steak; //������ũ ����
//	
//};

class Chulsoo {
public:
	//int Eat(int=20000);
	void Eat(int SteakWeight);
	inline void EatInline(int SteakWeight); // �ζ����Լ� ����

};



int main(void)
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.EatInline(500); //�ζ����Լ� ȣ��
	//Restaurant restaurant;

	//����������� ö������ �� ������ũ 20000��
	//restaurant.Steak = 20000;
	/*cout << "ö����" << chulsoo.Eat(restaurant.Steak) << "�� ¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�." << endl;
	cout << "��������� ö���� " << restaurant.Steak << "�� ¥�� ������ũ�� �Ծ��ٰ� �˰� �ִ�." << endl;
	*/
	return 0;
}

////ö���� ���� ������ũ ������ �޾Ƽ� ��ȯ�ϴ� �Լ� ����
////int Chulsoo::Eat(int SteakNum=20000) �����ο����� �ʱ�ȭ�ϸ� �� �ȴ�.
//void Chulsoo::Eat(int SteakNum)
//{
//	SteakNum = 10000; // ö���� 10000��¥�� ������ũ�� �Ծ��ٰ� ������
//	cout << "ö���� �Դ´�" << endl;
//	//return SteakNum;
//}


void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat()::ö����" << SteakWeight
		<< "g ¥�� ������ũ�� �Դ´�" << endl;
}

inline void Chulsoo::EatInline(int SteakWeight) //�ζ��� �Լ� ����
{
	cout << "EatInline()::ö����" << SteakWeight
		<< "g ¥�� ������ũ�� �Դ´�" << endl;
}