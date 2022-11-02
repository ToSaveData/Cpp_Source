#include <iostream>
#include <vector>
using namespace std;

class bingo																	//입력된 빙고판과 빙고 숫자를 세는 클래스
{
public:
	int first[6][6] = { 0 };
	int cnt = 0;
};

void shout(bingo& bingo)													//빙고 확인
{
	for (int i = 0; i < 5; i++)
	{
		/*가로 확인*/
		if (bingo.first[i][0] == -1 && bingo.first[i][1] == -1 &&
			bingo.first[i][2] == -1 && bingo.first[i][3] == -1 &&
			bingo.first[i][4] == -1)
			bingo.cnt++;
			//cout << "bingo" << bingo.cnt++ << endl;
		
		/*세로 확인*/
		if (bingo.first[0][i] == -1 && bingo.first[1][i] == -1 &&
			bingo.first[2][i] == -1 && bingo.first[3][i] == -1 &&
			bingo.first[4][i] == -1)
			bingo.cnt++;
			//cout << "bingo" << bingo.cnt++ << endl;
	}

	/*좌상단 우하단 대각선 확인*/
	if (bingo.first[0][0] == -1 && bingo.first[1][1] == -1 &&
		bingo.first[2][2] == -1 && bingo.first[3][3] == -1 &&
		bingo.first[4][4] == -1)
		bingo.cnt++;
		//cout << "bingo" << bingo.cnt++ << endl;
	
	/*우상단 좌하단 대각선 확인*/
	if (bingo.first[4][0] == -1 && bingo.first[3][1] == -1 &&
		bingo.first[2][2] == -1 && bingo.first[1][3] == -1 &&
		bingo.first[0][4] == -1)
		bingo.cnt++;
		//cout << "bingo" << bingo.cnt++ << endl;

}
int main()
{
	bingo number;															//빙고판과 빙고 숫자를 세는 클래스
	int callNum[6][6];														//사회자가 부르는 숫자

	for (int i = 0; i < 5; i++)												//빙고판 저장
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> number.first[i][j];
		}
	}

	for (int i = 0; i < 5; i++)												//사회자가 부르는 숫자 저장
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> callNum[i][j];
		}
	}

	int inputCnt = 0;														//사회자가 부르는 숫자의 횟수

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			number.cnt = 0;
			inputCnt++;														//사회자가 숫자를 부른 횟수 +1

			/*cout << "callNum : " << callNum[i][j] << "inputCnt : " << inputCnt << endl;*/

			/*빙고판 숫자 확인, 맞으면 -1로 변경, 0행 확인*/
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
			
			/*1행 확인*/
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
			
			/*2행 확인*/
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

			/*3행 확인*/
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

			/*4행 확인*/
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

			shout(number);													//빙고 확인

			/*3줄 빙고가 나오면 현재 사회자가 부른 숫자의 횟수 출력 후 중단*/
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