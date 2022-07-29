#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int ptr = -1;

void Push(int data)
{
	if(ptr == MAX_SIZE-1)
	{
		printf("Stack overflow \n");
		return;
	}
	stack[++ptr] = data;
}

int Top(){
	return stack[ptr];
}

void Pop(){
	if(ptr == -1)
	{
		printf("Stack is empty \n");
		return;
	}
	stack[ptr] = 0;
	ptr--;
}

void Print(){
	printf("stack: \n");
	for(int i=0; i <=ptr; i++)
	{
		printf("%d, %d; ", i, stack[i]);
	}
	printf("\n");
}

int main()
{
	Push(5);
	Print();
	Push(100);
	Push(-14);
	Push(20);
	Print();
	
	return 0;	
}
