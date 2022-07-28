#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * next;
};

Node * head;



void Insert(int x){
	struct Node * temp = (Node *)malloc(sizeof(struct Node)); // to jest wskaznik temp, który przechowuje wartoœæ pamiêci pocz¹tka zaalokowanego structa
	temp -> data = x; 
	temp -> next = NULL;
	temp -> next = head;
	//printf("temp data %d, temp next \n", temp -> data, temp -> next);
	head = temp;
	//printf("Head data %d, head next \n", head -> data, head -> next);
	
	
}

void Print(){
	Node * temp = head;
	printf("List is: \n");
	while(temp != NULL)
	{
		printf(" %d, %d", temp->data, temp->next);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	
	head = NULL;
	printf("How many numbers? \n");
	int n,i,x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Give me a number: \n");
		scanf("%d", &x);
		Insert(x);
		Print();
		
	}
	
	
	return 0;
	
}
