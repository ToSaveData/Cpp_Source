#include <iostream>
using namespace std;

class Stack
{
protected:
	int m_size;
	
	

public:
	int m_top;
	int* m_buffer;

	void Initialize(int size = 10);
	void RemoveAll();
	bool Push(int value);
	bool Pop(int& value);

	int Getsize();
	int GetTop();
	bool SetSize(int size);
	bool GetData(int index, int& data);

};

void Stack::Initialize(int size)
{
	m_size = size;
	m_top = -1; //0은 첫번째 데이터이기 때문, -1은 없다는 의미
	m_buffer = new int[m_size];
	memset(m_buffer, 0, sizeof(int) * m_size); // 멤버 전체를 특정 값으로 초기화하는 함수
}

void Stack::RemoveAll()
{
	m_size = 0;
	m_top = -1;
	delete[] m_buffer;
	m_buffer = NULL;
}

bool Stack::Push(int value)
{
	if (m_top >= m_size - 1)
		return false;
	m_buffer[++m_top] = value;
	return true;
}

bool Stack::Pop(int& value)
{
	if (m_top < 0)
		return false;
	value = m_buffer[m_top--];
	return true;
}

bool Stack::SetSize(int size)
{
	if (size < m_size)
		return false;
	int* tmp = m_buffer;
	m_size = size;
	m_buffer = new int[m_size];
	memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
	delete[] tmp;
	return true;
}

int Stack::Getsize()
{
	return m_size;
}

int Stack::GetTop()
{
	return m_top;
}

bool Stack::GetData(int index, int& data)
{
	if (index<0 || index>m_top)
		return false;
	data = m_buffer[index];
	return true;
}

int main()
{
	Stack s1;
	s1.Initialize(5);
	s1.m_top = 1; //m_top을 잘못된 값으로 변경, 컴파일에러 protected로 바뀌어서
	int data;
	s1.Pop(data); //m_top이 잘못된 값ㄹ이므로 잘못된 위치에서 데이터를 꺼내옴
	delete[] s1.m_buffer; // m_buffer가 가리키는 동적메모리 해제, 컴파일에러 protected로 바뀌어서
	s1.Push(123); //해제된 메모리 값에 저장


	Stack* p = new Stack;
	p->Initialize(100);

	return 0;
}