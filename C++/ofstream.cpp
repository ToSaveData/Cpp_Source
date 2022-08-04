//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "즐거운 프로그래밍!!!" << endl;
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	ofstream output;
//	output.open("test.txt");
//	output << "즐거운 프로그래밍!!!" << endl;
//	output.close();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char message[80];
//	cin >> message;
//	cout << message << endl;
//	return 0;
//}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	char message[80];
	input.open("test.txt");
	input >> message;
	cout << message << endl;
	input.close();

	return 0;
}