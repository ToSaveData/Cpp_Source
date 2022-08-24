//#include<stdio.h>
//
//int main() {
//    int flag = 0;
//    int x = 0, y = 0;
//    int n, i = 0, j = 0, cnt = 1, cmp = 0, state = 0;
//    int arr[100][100];
//
//    do {
//        if (flag == 1) {
//            printf("INPUT ERROR!\n");
//        }
//        scanf("%d", &n);
//        flag = 1;
//    } while (n < 1 || n > 100);
//    //�Ʒ��� �� �� �̵�(�Ұ����ϸ� ����������)
//    //������ ���� ������ ��ŭ �̵�(���� ���� ���� �����ʿ� �����ϸ� ����)
//    //���������� �� �� �̵�(�Ұ����ϸ� �Ʒ���)
//    //���� �Ʒ��� ������ ��ŭ �̵�(���� �����̳� ���� �Ʒ��ʿ� �����ϸ� ����)
//    
//    arr[0][0] =  1 ;
//
//    for (i = 1; i < n * n; i++) {
//        if (state == 0) {                     // ù state=0�Ͻ� ������ ��������
//            if (cmp == 0) {                     // �Ʒ���
//                x++;
//                cmp += 1;
//            }
//            else if (cmp == 1) {               // �����
//                x--;
//                y++;
//                if (x == 0) {
//                    cmp += 1;
//                }
//                if ((y == n - 1) && (n % 2) == 0) {
//                    cmp = 0;
//                    state = 1;
//                }
//            }
//            else if (cmp == 2) {               // ������
//                y++;
//                cmp += 1;
//            }
//            else if (cmp == 3) {               // ������
//                x++;
//                y--;
//                if (y == 0) {
//                    cmp = 0;
//                }
//                if ((x == n - 1) && (n % 2 != 0)) {
//                    cmp = 2;
//                    state = 1;
//                }
//            }
//        }
//
//        else if (state = 1) {                  // ���̻� �Ѿ�� state ������ ������ ����
//            if (cmp == 0) {                     // �Ʒ���
//                x++;
//                cmp = 3;
//            }
//            else if (cmp == 1) {               // �����
//                x--;
//                y++;
//                if (y == (n - 1)) {
//                    cmp -= 1;
//                }
//
//            }
//            else if (cmp == 2) {               // ������
//                y++;
//                cmp -= 1;
//            }
//            else if (cmp == 3) {               // ������
//                x++;
//                y--;
//                if (x == (n - 1)) {
//                    cmp -= 1;
//                }
//            }
//        }
//        arr[x][y] = ++cnt;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

#include <stdio.h> 

int main()
{
    int i, n, x, y, cnt, dir = 0;
    int arr[100][100];

    do {
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (i = x = y = 0, cnt = 1; i < n * n; i++) {
        arr[x][y] = cnt++;
       // printf("%d(%d, %d) : %d\n", cnt, x, y, dir % 4);
        if ((x == (n - 1) && n % 2 == 0) || (y == (n - 1) && n % 2 == 1)) break;
        switch (dir % 4) {
        case 0: y++; dir++; break;    // Y
        case 1:                       // Up
            x++; y--;
            if (y == 0) dir++;
            break;
        case 2: x++; dir++; break;    // X
        case 3:                       // Down
            x--; y++;
            if (x == 0) dir++;
            break;
        }
    }

    for (i = 0; i < n * n; i++) {
        switch (dir % 4) {
        case 0: x++; dir++; break;    // Y
        case 1:                       // Up
            x++; y--;
            if (x == (n - 1)) dir++;
            break;
        case 2: y++; dir++; break;    // X
        case 3:                       // Down
            x--; y++;
            if (y == (n - 1)) dir++;
            break;
        }
        arr[x][y] = cnt++;
        //printf("%d(%d, %d) : %d\n", cnt, x, y, dir % 4);
        if (x == (n - 1) && y == (n - 1)) break;
    }

    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++)
            printf("%d ", arr[x][y]);
        printf("\n");
    }


    return 0;
}