#include <stdio.h>
#include <stdlib.h>

struct NODE 
{
	struct NODE* next;
	int data;
};

NODE* push(NODE * parent, int data)
{
	NODE* node = (NODE*)malloc(sizeof(NODE));
	
	node->data = data;
	node->next = NULL;
	if(parent != NULL)
	parent->next = node;

	return node;
}

NODE* append(NODE* head, int data)
{
// 	NODE* prev = NULL;
	for (NODE* curr = head; curr != NULL; curr = curr->next)
	{
		if (curr->next == NULL)
			return push(curr, data);
	}
		//if (prev != NULL)
	//	{
		
	//	}
		//prev = curr;
	
}

void remove(NODE* head, int data)
{
	NODE* prev = NULL;
	for (NODE* curr = head; curr != NULL; curr = curr->next)
	{
		if (curr->data == data)
		{
			if (prev != NULL)
			{
				prev->next = curr->next;
			}
			free(curr);
			break; //curr = prev;  break는 반복문을 탈출하는 구문
		}
		prev = curr;
	}
}

void removeAll(NODE* head)
{
	NODE* next = NULL;
	for (NODE* curr = head->next; curr != NULL; curr = next)
	{
		next = curr->next;
		free(curr);
		//if (curr->next != NULL)
		//{
			
		//}
	}
	head->next = NULL;
}

void printList(NODE* head)
{
	for (auto curr = head->next; curr != NULL; curr = curr->next)
		printf("%3d\n", curr->data);
}


NODE* find(NODE* head, int data)
{
	NODE* curr = NULL;
	for (curr = head; curr != NULL; curr = curr->next)
	{
		if (curr->data == data)
			break;
	}
	return curr;
}

#if 0
int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	NODE* node1 = (NODE*)malloc(sizeof(NODE));
	NODE* node2 = (NODE*)malloc(sizeof(NODE));
	if (head == NULL) return 0;
	if (node1 == NULL) return 0;
	if (node2 == NULL) return 0;
	head->data = NULL;
	head->next = node1;
	node1 = push(head, 10);
	node1->next = node2;
	node2 = push(node1, 20);
	node2->next = NULL;
	//node2->next = NULL;
	NODE* cir = head;
	if (cir == NULL) return 0;

	while (cir->next != NULL)
	{
		cir = cir->next;
		printf("%d ", cir->data);
	}

	return 0;
}

#else
int main()
{
	NODE* hash[20];
	NODE* head = push(NULL, 0);
	NODE* node = head;

	for (int i = 1; i < 100; i++) {
		node = push(node, i);
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
	node = find(head,98);
	if (node != NULL)
	printf("%d\n", node->data);

	removeAll(head);

	printList(head);

	return 0;
}
#endif