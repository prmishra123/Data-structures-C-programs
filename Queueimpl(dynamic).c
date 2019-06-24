//A PROGRAM ON DYNAMIC IMPLEMENTATION OF QUEUE
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
struct Node
{
 int data;
 struct Node *next;
 }*front=NULL,*rear=NULL;
 void insert(int);
 void deleteq();
 void display();

 void main()
 {
 int choice,value;
 clrscr();
 while(1){
 printf("\n*****menu******\n");
 printf("1.insert\n2.delete\n3.display\n4.exit\n");
 printf("enter your choice:");
 scanf("%d",&choice);	
 switch(choice){
 case 1:
	 printf("enter the value to be insert:");
	 scanf("%d",&value);
	 insert(value);
	 break;
 case 2: deleteq(); break;
case 3: display(); break;
 case 4: exit(0);
 default:printf("\n wrong selection!!!!please try again");
 }
}
}
void insert(int value)
{
  struct Node *newNode;
  newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=value;
  newNode->next=NULL;
  if(front==NULL)
  front=rear=newNode;
  else{
  rear->next=newNode;
  rear=newNode;
  }
  printf("\ninsertion success\n");
}
void deleteq()
{
if(front==NULL)
 printf("\n queue is empty!!\n");
 else{
 struct Node *temp=front;
 front=front->next;
 printf("\n deleted element: %d\n",temp->data);
 free(temp);
 }
}
void display()
{
 if(front==NULL)
 printf("\nqueue is empty!!!\n");
 else
 {
 struct Node *temp=front;
 while(temp->next !=NULL)
 {
 printf("%d--->",temp->data);
 temp=temp->next;
 }
  printf("%d---->NULL\n",temp->data);
  }
}
