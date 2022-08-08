//함수의 포인터로 사용해서 계산기를 작성하시오
//1. 함수포인터를 이용(typedef void(*funcPtr)(calType*))
//2. main 함수에서 함수 호출 1회로 제한
/*연산자에 따라서 계산
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

void add(calType* d) { d->r = d->a + d->b; } //함수에서 괄호를 열지 않으면 함수포인터이다.
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