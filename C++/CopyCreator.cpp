#include <iostream>
#include <string>
using namespace std;


	class MyProfile
	{
	private:
		string name;
	public:
		MyProfile(string n)
		{
			name.append(n); //append: 내용을 넣는다
		}
		void setName(string n)
		{
			name.clear(); //clear: 내용을 지운다
			name.append(n);
		}

		void getName()
		{
			cout << "name: " << name << endl;
		}
	};
	int main()
	{
		MyProfile profile1("allen");
		profile1.getName();

		MyProfile* ptrProfile1 = new MyProfile("andrew");
		ptrProfile1->getName();
		delete ptrProfile1;

		return 0;
	}
