#include <stdio.h>
#include <stdlib.h>

struct NODE {
    NODE* next;
    int data;
};

NODE* push(NODE* hash[], NODE* parent, int data)
{
    NODE* node = (NODE*)malloc(sizeof(NODE));
    node->next = NULL;
    node->data = data;

    if (parent != NULL)
        parent->next = node;

    if ((int)(data % 10) == 0)
        hash[(int)(data / 10)] = node;

    return node;
}

NODE* append(NODE* hash[], NODE* head, int data)
{
#if 1
    NODE* curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    return push(hash, curr, data);
#else
    NODE* curr = NULL;
    for (curr = head; curr != NULL; curr = curr->next) {
        if (curr->next == NULL) {
            return push(curr, data);
        }
    }
    return curr;
#endif
}

NODE* find(NODE* hash[], int data)
{
    NODE* curr = NULL;
    for (curr = hash[(int)(data / 10)]; curr != NULL; curr = curr->next) {
        putchar('.');
        if (curr->data == data)
            break;
    }
    putchar('\n');
    return curr;
}

void remove(NODE* head, int data)
{
    NODE* prev = NULL;
    for (NODE* curr = head; curr != NULL; curr = curr->next) {
        if (curr->data == data) {
            if (prev != NULL)
                prev->next = curr->next;
            free(curr);
            //            break;
            curr = prev; //동일한 데이터 모두 날리는 법
        }
        prev = curr;
    }
}

void removeAll(NODE* head) //중요한 점은 head를 날리지 않아야 한다는 점이다. 그래서 head->next부터 시작
{
    NODE* next;
    for (NODE* curr = head->next; curr != NULL; curr = next) {
        next = curr->next;
        free(curr);
    }
    head->next = NULL; //초기화 안 해주면 쓰레기값 도출되면서 오류발생
}

void printList(NODE* head)
{
    for (auto curr = head->next; curr != NULL; curr = curr->next)
        printf("%3d\n", curr->data);
}

int main()
{
    NODE* hash[20];
    NODE* head = push(hash, NULL, 0);
    NODE* node = head;

    for (int i = 1; i < 100; i++) {
        node = push(hash, node, i);
    }
    printList(head);
    printf("===================================\n");

    for (int i = 1; i < 50; i += 2) {
        remove(head, i);
    }

    printList(head);
    printf("===================================\n");
    /*
        for(int i = 0; i < 10; i++)
            printf("hash[] : %p\n", hash[i]);
    */
    node = find(hash, 55);
    if (node != NULL)
        printf("%d\n", node->data);

    removeAll(head);

    printList(head);

    return 0;
}