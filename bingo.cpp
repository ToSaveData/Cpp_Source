#include <iostream>
#include <vector>
using namespace std;

class bingo																	//�Էµ� �����ǰ� ���� ���ڸ� ���� Ŭ����
{
public:
	int first[6][6] = { 0 };
	int cnt = 0;
};

void shout(bingo& bingo)													//���� Ȯ��
{
	for (int i = 0; i < 5; i++)
	{
		/*���� Ȯ��*/
		if (bingo.first[i][0] == -1 && bingo.first[i][1] == -1 &&
			bingo.first[i][2] == -1 && bingo.first[i][3] == -1 &&
			bingo.first[i][4] == -1)
			bingo.cnt++;
			//cout << "bingo" << bingo.cnt++ << endl;
		
		/*���� Ȯ��*/
		if (bingo.first[0][i] == -1 && bingo.first[1][i] == -1 &&
			bingo.first[2][i] == -1 && bingo.first[3][i] == -1 &&
			bingo.first[4][i] == -1)
			bingo.cnt++;
			//cout << "bingo" << bingo.cnt++ << endl;
	}

	/*�»�� ���ϴ� �밢�� Ȯ��*/
	if (bingo.first[0][0] == -1 && bingo.first[1][1] == -1 &&
		bingo.first[2][2] == -1 && bingo.first[3][3] == -1 &&
		bingo.first[4][4] == -1)
		bingo.cnt++;
		//cout << "bingo" << bingo.cnt++ << endl;
	
	/*���� ���ϴ� �밢�� Ȯ��*/
	if (bingo.first[4][0] == -1 && bingo.first[3][1] == -1 &&
		bingo.first[2][2] == -1 && bingo.first[1][3] == -1 &&
		bingo.first[0][4] == -1)
		bingo.cnt++;
		//cout << "bingo" << bingo.cnt++ << endl;

}
int main()
{
	bingo number;															//�����ǰ� ���� ���ڸ� ���� Ŭ����
	int callNum[6][6];														//��ȸ�ڰ� �θ��� ����

	for (int i = 0; i < 5; i++)												//������ ����
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> number.first[i][j];
		}
	}

	for (int i = 0; i < 5; i++)												//��ȸ�ڰ� �θ��� ���� ����
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> callNum[i][j];
		}
	}

	int inputCnt = 0;														//��ȸ�ڰ� �θ��� ������ Ƚ��

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			number.cnt = 0;
			inputCnt++;														//��ȸ�ڰ� ���ڸ� �θ� Ƚ�� +1

			/*cout << "callNum : " << callNum[i][j] << "inputCnt : " << inputCnt << endl;*/

			/*������ ���� Ȯ��, ������ -1�� ����, 0�� Ȯ��*/
			if (number.first[0][0] == callNum[i][j])
				number.first[0][0] = -1;
			else if (number.first[0][1] == callNum[i][j])
				number.first[0][1] = -1;
			else if (number.first[0][2] == callNum[i][j])
				number.first[0][2] = -1;
			else if (number.first[0][3] == callNum[i][j])
				number.first[0][3] = -1;
			else if (number.first[0][4] == callNum[i][j])
				number.first[0][4] = -1;
			
			/*1�� Ȯ��*/
			else if (number.first[1][0] == callNum[i][j])
				number.first[1][0] = -1;
			else if (number.first[1][1] == callNum[i][j])
				number.first[1][1] = -1;
			else if (number.first[1][2] == callNum[i][j])
				number.first[1][2] = -1;
			else if (number.first[1][3] == callNum[i][j])
				number.first[1][3] = -1;
			else if (number.first[1][4] == callNum[i][j])
				number.first[1][4] = -1;
			
			/*2�� Ȯ��*/
			else if (number.first[2][0] == callNum[i][j])
				number.first[2][0] = -1;
			else if (number.first[2][1] == callNum[i][j])
				number.first[2][1] = -1;
			else if (number.first[2][2] == callNum[i][j])
				number.first[2][2] = -1;
			else if (number.first[2][3] == callNum[i][j])
				number.first[2][3] = -1;
			else if (number.first[2][4] == callNum[i][j])
				number.first[2][4] = -1;

			/*3�� Ȯ��*/
			else if (number.first[3][0] == callNum[i][j])
				number.first[3][0] = -1;
			else if (number.first[3][1] == callNum[i][j])
				number.first[3][1] = -1;
			else if (number.first[3][2] == callNum[i][j])
				number.first[3][2] = -1;
			else if (number.first[3][3] == callNum[i][j])
				number.first[3][3] = -1;
			else if (number.first[3][4] == callNum[i][j])
				number.first[3][4] = -1;

			/*4�� Ȯ��*/
			else if (number.first[4][0] == callNum[i][j])
				number.first[4][0] = -1;
			else if (number.first[4][1] == callNum[i][j])
				number.first[4][1] = -1;
			else if (number.first[4][2] == callNum[i][j])
				number.first[4][2] = -1;
			else if (number.first[4][3] == callNum[i][j])
				number.first[4][3] = -1;
			else if (number.first[4][4] == callNum[i][j])
				number.first[4][4] = -1;

			//for (int i = 0; i < 5; i++)
			//{
			//	for (int j = 0; j < 5; j++)
			//	{
			//		cout << number.first[i][j] << " ";
			//	}
			//	cout << endl;
			//}
			//cout << endl << endl;

			shout(number);													//���� Ȯ��

			/*3�� ���� ������ ���� ��ȸ�ڰ� �θ� ������ Ƚ�� ��� �� �ߴ�*/
			if (number.cnt >= 3)
			{
				cout << inputCnt;
				goto end;
			}
		}
	}
end:
	return 0;
}