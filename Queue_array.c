/**************Implementation of Queue using array*************************/

#include <stdio.h>
#include<stdlib.h>

#define SIZE 5
int front = -1;
int rear = -1;
int queue[SIZE];

void enqueue();
void dequeue();
void print();

int main()
{
	int option;
	while(1)
	{
		printf("1.enqueue\n2.dequeue\n3.print\n4.exit\n");
		printf("Enter option: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: print();
				break;
			case 4: exit(0);
				break;
		}
	}
}
void enqueue()
{
	int num;
	printf("Enter the element to be inserted: ");
	scanf("%d", &num);
	if(rear == SIZE-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		queue[++rear] = num;
	}
}
void dequeue()
{
	if(rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted element is %d\n", queue[front]);
		front++;
	}
}
void print()
{
	if(front == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(int i=front;i <= rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
