#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	/*for (int i = 0; i < q.size(); i++)
	{
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;*/

	stack<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}

	return 0;
}