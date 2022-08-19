#include <iostream>
using namespace std;

class MyProfile {
private:
	int* ptrNum;
	int zipcode;
public:

	MyProfile(int n, int zc)
	{
		ptrNum = new int;
		*ptrNum = n;
		zipcode = zc;
	}

	~MyProfile() 
	{
		delete ptrNum;
		cout << "Destructor" << endl;
	}
	void setProfile(int n, int zc)
	{
		*ptrNum = n;
		zipcode = zc;
	}

	void getProfile()
	{
		cout << "ptrNum: " << ptrNum << endl;
		cout << "*ptrNum: " << *ptrNum << endl;
		cout << "zipcode: " << zipcode << endl;
		cout << endl;
	}


};
//Person(const Person& copy) : age(copy.age)
//{
//	name = new char[strlen(copy.name) + 1];
//	strcpy(name, copy.name);
//}

int main()
{
	MyProfile profile1(10, 90031);
	profile1.getProfile();

	MyProfile profile2(profile1);
	profile1.getProfile();
	profile2.getProfile();
	profile2.setProfile(500, 900000);
	profile1.getProfile();
	profile2.getProfile();

	return 0;
}