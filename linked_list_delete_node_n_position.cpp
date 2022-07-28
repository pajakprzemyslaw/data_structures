#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * next;
};

Node * head;



void Insert(int data, int n){
	Node * temp = new Node;
	temp -> data = data;
	temp -> next = NULL;
	
	if(n == 1){
		temp -> next = head;
		head = temp;
		return;	
	}
	
	Node * temp2 = head;
	for(int i=0; i<n-2; i++){
		temp2 = temp2 -> next;
	}
	temp->next = temp2->next;
	temp2->next = temp;
	
	
}

void Print(){
	Node * temp = head;
	while(temp != NULL){
		printf(" %d, %d ;", temp->data, temp->next);
		temp = temp->next;
	}
	
}

void Delete(int n){
	Node * temp1 = head;
	if(n==1)
	{
		head = temp1->next;//head points to second node
		free(temp1);
		return;
	}
	int i;
	for(int i=0; i<n-2; i++){
		temp1 = temp1->next; // temp1 points to n-1 node
	}
	Node * temp2 = temp1->next; // temp2 points to n node
	temp1->next = temp2->next; //temp1 points to n+1 node
	free(temp2);
}

int main()
{
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	Print();
	printf("\nAfter delete\n");
	Delete(4);
	Print();
	
	return 0;
	
}
