//PROGRAM FOR STATIC IMPLEMENTATION OF QUEUE

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
void enqueue(int);
void  dequeue();
void display();
int queue[size],front=-1,rear=-1;

void main()
{
 int value,choice;
 clrscr();
 while(1){
	printf("\n\n******menu*******\n");
	printf("1, insertion\n2, deletion\n3.display\n4.exit");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
	case 1:printf("enter the value to be insert:");
	scanf("%d",&value);
	enqueue(value);
	break;
	case 2:dequeue();
	       break;
	case 3: display();
		break;
	case 4:exit(0);
default: printf("\n wrong selection!!!!! try again!!");
	}
 }
}
void enqueue(int value){
  if(rear==size-1)
  printf("\n queue is full!!! insertion is not possible!!");
  else{
  if(front==-1)
  front=0;
  rear++;
  queue[rear]=value;
  printf("\n insertion success!!!");
  }
}
 void dequeue(){
  if(front==rear)
  printf("\n queue is empty!!deletion not possible");
  else{
	printf("\n deleted:%d",queue[front]);
	front++;
	if(front==rear)
	front=rear=-1;
	}
  }
  void display(){
  if(rear==-1)
  printf("\nqueue is empty!!");
  else{
  int i;
  printf("\n queue elements are:\n");
  for(i=front;i<=rear;i++)
  printf("%d\t",queue[i]);
  }
 }
