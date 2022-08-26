#include <stdio.h>
#include <stdlib.h>

typedef struct NODE 
{
	struct NODE* next;
	int data;
} node;

node* func(node *parent, int data)
{
	node* i = (node*)malloc(sizeof(node));
	if (i == NULL) { return; }
	
	i->data = data;

	parent->next = i;
	
	i->next = NULL;

	return i ;
}


int main()
{
	node *head = (node*)malloc(sizeof(node));
	if (head == NULL) { return; }
	
	node* cir1 = (node*)malloc(sizeof(node));
	node* cir2= (node*)malloc(sizeof(node));
	if (cir1 == NULL) { return; }
	if (cir2 == NULL) { return; }
	//cir = head->next;
	cir1->next = head;
	cir2 = func(cir1, 20);
	for (; head != NULL;)
	{
		printf("%d", cir->data);
		;
	}
	free(head);
	free(cir);
	return 0;
}

