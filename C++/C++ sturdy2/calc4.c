//�Լ��� �����ͷ� ����ؼ� ���⸦ �ۼ��Ͻÿ�
//1. �Լ������͸� �̿�(typedef void(*funcPtr)(calType*))
//2. main �Լ����� �Լ� ȣ�� 1ȸ�� ����
/*�����ڿ� ���� ���
switch(op)
{
case '+':
calc = add;
break;
calc(&data);
return 0;
*/

#include <stdio.h>

typedef struct {
    float a, b, r;
} calType;

typedef void (*funcPtr)(calType*);

void add(calType* d) { d->r = d->a + d->b; } //�Լ����� ��ȣ�� ���� ������ �Լ��������̴�.
void sub(calType* d) { d->r = d->a - d->b; }
void mul(calType* d) { d->r = d->a * d->b; }
void div(calType* d) { d->r = d->a / d->b; }

int main()
{
    calType data;
    char op;
    funcPtr calc;

    do {
        scanf("%f %c %f =", &data.a, &op, &data.b);
    } while (data.b == 0 && op == '/');

    switch (op) {
    case '+': calc = add; break;
    case '-': calc = sub; break;
    case '*': calc = mul; break;
    case '/': calc = div; break;
    }
    calc(&data);

    printf("%.02f %c %.02f = %.02f\n", data.a, op, data.b, data.r);

    return 0;
}