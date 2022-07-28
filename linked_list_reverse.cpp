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

void Reverse()
{
	Node * current, * prev, * next;
	current = head;
	prev = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

int main()
{
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	Print();
	printf("\nAfter reversing\n");
	Reverse();
	Print();
	
	return 0;
	
}
