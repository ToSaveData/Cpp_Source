#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    NODE* next;
    int data;
};


NODE* Push(NODE* parent, int data)
{
    NODE* node1 = (NODE*)malloc(sizeof(NODE));
    if (node1 == NULL || parent == NULL) return 0;

    //parent->data = NULL;
    node1->data = data;
    node1->next = NULL;
    parent->next = node1;

    return node1;
}
//NODE* push(NODE* parent, int data)
//{
//    NODE* node = (NODE*)malloc(sizeof(NODE));
//    node->next = NULL;
//    node->data = data;
//
//    if (parent != NULL)
//        parent->next = node;
//
//    return node;
//}

void removeAll(NODE* head)
{
    NODE* next;
    for (NODE* curr = head; curr != NULL; curr = next)
    {
        printf(".");
        next = head->next;
        free(curr);
    }
}

void remove(NODE* head, int data) //시작점 head와 지우고자 하는 data 
{
    NODE* prev = NULL;
    for (NODE* curr = head; curr != NULL; curr = curr->next)
    {
        if (curr->data == data)
        {
            if (prev != NULL)
                prev->next = curr->next;
            free(curr);
            break; // 같은 데이터를 삭제?? curr = prev;
        }
        prev = curr; //다음 단계로 가기 전에 현재 자료를 prev로 변경
    }
}

NODE* find(NODE* head, int data)
{
    NODE* curr;
    for (curr = head; curr != NULL; curr = curr->next)
    {
        if (curr->data = data)
            break;
    }
    return curr;
}

int main()
{
    NODE* head = Push(NULL, 10);
    NODE* node1 = head;
    for (int i = 4; i < 3000; i++) {
        node1 = Push(node1, i * 10);
    }

    for (node1 = head; node1 != NULL; node1 = node1->next)
        printf("%3d\n", node1->data);

    // removeAll(head);
    // NODE *banjang = maerong 
     // NODE *banjang = tux
    return 0;
}