#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * next;
};


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


//Recursive reverse printing

void Recursive_print(struct Node * p){
	if(p == NULL){
		return;
	}
	Recursive_print(p->next);
	printf("%d %d; ", p->data, p->next);
}


int main()
{
	struct Node * head = NULL;
	head = Insert(head,1);
	head = Insert(head,2);
	head = Insert(head,3);
	head = Insert(head,4);
	Print(head);
	Recursive_print(head);
	
	return 0;
	
}
