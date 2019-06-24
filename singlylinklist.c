//INSERT, DELETE AND DISPLAY NODES IN SINGLY LINK LIST

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertatbeg(int);
void insertatend(int);
void insertbetween(int,int,int);
void display();
void removebeg();
void removeend();
void removespecific(int);

struct Node
{int data;
struct Node *next;
}*head=NULL;
void main()
{
 int choice,value,choice1,loc1,loc2;
 clrscr();
 while(1){
 mainmenu: printf("\n\n*****MENU*****\n1.insert\n2.display\n3.delete\n4.exit\n enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("enter the value to be insert:");
	scanf("%d",&value);
	while(1){
	printf("where u want to insert:\n 1.at beginning\n2.at end\n3.between\nenter your choice:");
	scanf("%d",&choice1);
{
	 case 1:insertatbeg(value);
	 break;
	 case 2:insertatend(value);
	 break;
	 case 3:printf("enter the 2 values where u want to insert:");
	scanf("%d%d",&loc1,&loc2);
	insertbetween(value,loc1,loc2);
	 break;
	 default: printf("\n werong input!!try again!!\n");
	 goto mainmenu;
	 }   goto submenuend;
	 }   submenuend:
	 break;
  case 2:display();
	 break;
  case 3:printf("how do you want to delete:\n1. from beginning\n2,from end\n3.at specific\nenter your choice:");
	scanf("%d",&choice1);
	switch(choice1)
	{
	case 1:removebeg();
		break;
	case 2:removeend();
		break;
	case 3:printf("enter the value which you want to delete:");
		scanf("%d",&loc2);
	       removespecific(loc2);
	       break;
	default:printf("\n wrong input!!!try again!!!\n\n");
	goto mainmenu;
	}
	break;
  case 4:exit(0);
  default:printf("\n wrong input try again!!\n\n");
  }
 }
}
void insertatbeg(int value)
    {
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	if(head==NULL)
	{
	newNode->next=NULL;
	head=newNode;
	}
	else
	{
	newNode->next=head;
	head=newNode;
	}
	printf("insertion success!!!");
    }
    void insertatend(int value)
    {
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;
	if(head==NULL)
	{
	head=newNode;
	}
	else
	{
	struct Node *temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=newNode;
	}
	printf("\n insertion success!!!");
	}
    void insertbetween(int value,int loc1,int loc2)
    {
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    new Node-> data=value;
	    if(head==NULL)
	    {
	    newNode->next=NULL;
	    head=newNode;
	    }
	    else
	    {
	    struct Node *temp=head;
	    while(temp->data!=loc1 && temp->data!=loc2)
	    temp=temp->next;
	    newNode->next=temp->next;
	    temp->next=newNode;
	    }
	    printf("\n one node inserted!!!\n");
    }
 void removebeg()
 {
	if(head==NULL)
	printf("\nlist is empty!!!");
	else
	{
	struct Node *temp=head;
	if(head->next==NULL)
	{
	head=NULL;
	free(temp);
	}
	else
	{
	head=temp->next;
	free(temp);
	printf("\none node deleted!!!\n\n");
	}
     }
  }

  void removeend()
  {
  if(head==NULL)
  {
  printf("\n list is empty!!!\n");
  }
  else
  {
  struct Node *temp1=head,*temp2;
  if(head->next==NULL)
  head=NULL;
  else
  {
  while(temp1->next!=NULL)
  {
  temp2=temp1;
  temp1=temp1->next;
  }
  temp2->next=NULL;
  }
  free(temp1);
  printf("\n one node deleted!!!\n\n");
  }
 }
 void removespecific(int delvalue)
 {
 struct Node *temp1=head,*temp2;
 while(temp1->data!=delvalue)
 {
	 if(temp1->next==NULL){
	 printf("\n given node not found in the list!!!");
	 goto functionend;
	 }
    temp2=temp1;
    temp1=temp1->next;
    }
    temp2->next=temp1->next;
    free(temp1);
    printf("\n one node deleted!!!\n\n");
    functionend:
    }
  void display()
  {
    if(head==NULL)
    {
    printf("\n list is empty\n");
    }
    else
    {
    struct Node *temp=head;
    printf("\n\n list elements are-\n");
    while(temp->next!=NULL)
    {
     printf("%d--->",temp->data);
     temp=temp->next;
     }
     printf("%d--->NULL",temp->data);
     }
 }

