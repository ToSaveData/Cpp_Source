#include <iostream>
using namespace std;

class Integer
{
public:
	int* m_pInt;
	Integer(int value)
	{
		m_pInt = new int;
		*m_pInt = value;
	}
	Integer(Integer& obj)
	{
		m_pInt = new int(* obj.m_pInt);
	}
};

int main()
{
	Integer i1(3);
	Integer i2 = i1;
}