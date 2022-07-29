#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * prev;
};

struct Node * head;

struct Node * GetNewNode(int data){
	struct Node * temp = new Node;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

void Insert_At_Head(int data){
	struct Node * temp = GetNewNode(data);
	if(head == NULL)
	{
		head = temp;
		return;
	}
	else
	{
		head->prev = temp;
		temp->next = head;
		head = temp;
	}
}

void Insert_At_Tail(int data){
	struct Node * temp = GetNewNode(data);
	struct Node * temp2 = head;
	while(temp2 -> next != NULL)
	{
		temp2 = temp2 -> next;
	}
	temp2->next = temp;
	temp->prev = temp2;
}

//Forward/Normal printing
void Print(){
	printf("Forward printing ");
	Node * temp = head;
	while(temp != NULL){
		printf("%d, %d; ", temp->data, temp->next);
		temp = temp->next;
	}
	printf("\n");
}

//Reverse print
void ReversePrint(){
	Node * temp = head;
	while(temp->next != NULL)
	{
		temp = temp -> next;
	}
	printf("Reverse printing ");
	while(temp != NULL)
	{
		printf("%d, %d; ", temp->data, temp->next);
		temp = temp -> prev;
	}
	printf("\n");
	return;
}


int main()
{
	head = NULL;
	Insert_At_Head(1);
	Insert_At_Head(2);
	Insert_At_Head(3);
	Insert_At_Head(4);
	Print();
	ReversePrint();
	Insert_At_Tail(5);
	Print();
	ReversePrint();
	
	return 0;
	
}
