//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, i, ball, strike, th;
//
//	cin >> n;
//	if (n < 1 || n>100)
//	{
//		cout << "input error" << endl;
//		return 0;
//	}
//	
//	// ���࿡ 324���
//	for (i = 0; i < n; i++)
//	{
//		cin >> th >> strike >> ball;
//		m = th / 10;
//
//		//cout << th << " " << strike << " " << ball << endl;
//	}
//
//	//cout << th << " " << strike << " " << ball << endl;
//	//����Ƚ��
//	//���ڸ��� ��Ʈ����ũ ��
//
//	//���� ���ɼ� �ִ� �� ����
//
//	return 0;
//}

#include <stdio.h>
typedef struct answer
{
	int question;
	int strike;
	int ball;
}ANSWER;

int main()
{
	int numChance[1000] = { 0, };


	///123~987�� ���ɼ� �ִ¼��� 1��///
	char tmp[4];
	for (int i = 123; i <= 987; i++)
	{
		sprintf(tmp, "%d", i);

		if (tmp[1] != '0' && tmp[2] != '0'
			&& tmp[0] != tmp[1] && tmp[1] != tmp[2] && tmp[0] != tmp[2])
			numChance[i] = 1;
	}

	int n;
	scanf_s("%d ", &n);

	int question;
	int strike;
	int ball;
	ANSWER _answer[100]; //�ִ� ���� Ƚ����ŭ �޸� �Ҵ�.

	//n�� ����ŭ ���� �Է¹ޱ�
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &question, &strike, &ball);
		_answer[i].question = question;
		_answer[i].strike = strike;
		_answer[i].ball = ball;
	}

	//���ɼ� ���°� ������
	for (int i = 123; i <= 987; i++)
	{
		char myAnswer[4];
		char minhyukAnswer[4];


		sprintf(myAnswer, "%d", i);
		for (int j = 0; j < n; j++)
		{
			if (numChance[i] == 0)
				break;

			int strike = 0;
			int ball = 0;

			sprintf(minhyukAnswer, "%d", _answer[j].question);

			for (int n1 = 0; n1 < 3; n1++)
			{
				for (int n2 = 0; n2 < 3; n2++)
				{
					if (myAnswer[n1] == minhyukAnswer[n2])
					{
						if (n1 == n2) strike++;
						else ball++;

					}
				}
			}
			if (strike != _answer[j].strike || ball != _answer[j].ball)
				numChance[i] = 0;
		}
	}

	// ���ɼ� �ִ� �͵鿡 ���� ī��Ʈ
	int resultCnt = 0;
	for (int i = 123; i <= 987; i++)
	{
		if (numChance[i] == 1)
			resultCnt++;
	}


	//���� ���
	printf("%d", resultCnt);


	return 0;
}