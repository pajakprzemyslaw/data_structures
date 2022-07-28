#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node{
	int data;
	struct Node * link;
};

Node * A = NULL;



int main()
{
	Node * temp = (Node*)malloc(sizeof(Node)); // Node * temp = new Node();
	(*temp).data = 2; // temp->data = 2;
	(*temp).link = NULL; // temp->link=NULL;
	//Want to add new Node at the beggining
	temp = new Node();
	temp->data = 4;
	temp->link = NULL;
	
	Node * temp1 = A;
	
	while(temp1->link != NULL)
	{
		temp1 = temp1 -> link;
	}
	temp1->link = temp;
	
	return 0;
	
}
