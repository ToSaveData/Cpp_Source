//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v(6, 1);
//	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
//	for (auto i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl << endl;
//
//	v.assign(4, 3); // assign은 대입연산자 느낌
//	cout << "v.capacity():" << v.capacity() << " /v.size(): " << v.size() << endl;
//	for (auto i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl<< endl;
//
//	v[2] = 7;
//	for (vector<int>::iterator it = v.begin() + 3; it != v.end(); it++) //iterator는 포인터와 동일
//		*it = 9;
//	v.push_back(10);
//	v.push_back(20);
//	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
//	for (auto i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl << endl;
//
//	v.push_back(30);
//	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
//	for (auto i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl << endl;
//
//	v.resize(17);
//	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
//	for (auto i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl << endl;
//
//	return 0;
//}

// vector::begin/end
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector;
    for (int i = 1; i <= 5; i++) myvector.push_back(i);

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}