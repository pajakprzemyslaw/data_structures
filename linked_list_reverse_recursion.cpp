#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * next;
};

struct Node * head;

struct Node * Insert(struct Node * head, int data){
	Node * temp = new Node;
	temp -> data = data;
	temp -> next = NULL;
	
	if(head == NULL){
		head = temp;
		return head;	
	}
	
	else
	{
		struct Node * temp2;
		temp2 = head;
		while(temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
		return head;
	}
}

/* Forward/Normal printing
void Print(struct Node * p){
	Node * temp = p;
	while(temp != NULL){
		printf(" %d, %d ;", temp->data, temp->next);
		temp = temp->next;
	}
}
*/

//Recursive printing

void Print(struct Node * p){
	if(p == NULL){
		printf("\n");
		return;
	}
	printf("%d %d; ", p->data, p->next);
	Print(p->next);
}


//Reverse

void Reverse(struct Node * p){
	if(p->next == NULL){
		head = p;
		return;
	}
	Reverse(p->next);
	struct Node * temp = p->next;
	temp->next = p;
	p->next = NULL;
}


int main()
{
	head = NULL;
	head = Insert(head,1);
	head = Insert(head,2);
	head = Insert(head,3);
	head = Insert(head,4);
	Print(head);
	Reverse(head);
	Print(head);
	
	return 0;
	
}
