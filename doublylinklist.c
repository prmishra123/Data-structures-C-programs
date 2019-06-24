//INSERT, DELETE AND DISPLAY NODES IN DOUBLY LINK LIST
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
void insertatbeg(int);
void insertatend(int);
void insertatafter(int,int);
void deletebeg();
void deleteend();
void deletespecific();
void display();
struct Node
{
 int data;
 struct Node *previous,*next;
 }*head=NULL;
 void main()
 {
	int choice1,choice2,value,position,location,delvalue;
	 clrscr();
	 while(1)
	{
	 printf("\n*****menu*****\n");
	 printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter your choice:");
	 scanf("%d",&choice1);
	 switch(choice1)
	 {
	 case 1: printf("enter the values to be inserted:");
		 scanf("%d",&value);
		 while(1)
		 {
		 printf("\n select from the following inserting options\n");
		 printf("1.at beginning\n2.at end\n3.after a node\n4.cancel\nenter your choice");
		 scanf("%d",&choice2);
		 switch(choice2)
		 {
		 case 1: insertatbeg(value);
			break;
		 case 2:insertatend(value);
			break;
		 case 3:printf("enter the location after which u want to insert:");
			scanf("%d",&location);
			insertatafter(value,location);
			break;

		 case 4:goto endswitch;
		 default:printf("\n please select correct inserting options!!!\n");
		 }
	 }
	 case 2: while(1)
	 { printf("\nselect from the following deleting options\n");
	   printf("1.atbeginning\n3.at end\n3.at specific node\n4.cancel\n enter your choice:");
	   scanf("%d",&choice2);
	   switch(choice2)
	   {
	   case 1:deletebeg();
		break;
	   case 2:deleteend();
		break;
	   case 3: printf("enter the node value to be deleted:");
		scanf("%d",&delvalue);
		deletespecific (delvalue);
		break;
	   case 4:goto endswitch;
	   default: printf("\nplease select correct deleting options!!!\n");
	   }
	 }
	 endswitch:
	 break;
    case 3: display();
	    break;
    case 4:exit(0);
    default: printf("\n please select correct option!!!!");
    }
  }
}
void insertatbeg(int value)
{
  struct Node *newNode;
  newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=value;
  newNode->previous=NULL;
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
   newNode->previous=NULL;
   head=newNode;
   }
   else
   {
   struct Node *temp=head;
   while(temp->next!=NULL)
   temp->next=newNode;
   newNode->previous= temp;
   }
   printf("\n insertion success!!!");
   }
   void insertafter(int value,int location)
   {
   struct Node *newNode;
   newNode=(struct Node*)malloc(sizeof(struct Node));
   newNode->data=value;
   if(head==NULL)
   {
   newNode->previous=newNode->next=NULL;
   head=newNode;
   }
   else
   {
   struct Node *temp1=head,*temp2;
   while(temp1->data!=location)
   {
   if(temp1->next==NULL)
   {
   printf("given node is not found in the list!!!!");
   goto endfunction;
   }
   else
   {
   temp1=temp1->next;
   }
   }
  temp2=temp1->next;
  temp1->next=newNode;
  newNode->previous=temp1;
  newNode->next=temp2;
  temp2->previous=newNode;
  printf("\ninsertion success!!!!");
  }
  endfunction:
  }
  void deletebeg()
  {
  if(head==NULL)
  printf("list is empty!!!deletion not possible!!!");
  else
  {
  struct Node *temp=head;
  if(temp->previous==temp->next)
  { head=NULL;
  free(temp);
  }
  else{
	  head=temp->next;
	  head->previous =NULL;
	  free(temp);
	  }
	  printf("\n deletion success!!!");
	  }
  }
  void deleteEnd()
  {
   if(head==NULL)
   printf("list is empty!!!deletion not possible!!!!");
   else{
     struct Node *temp=head;
     if(temp->previous==temp->next)
     {
      head=NULL;
      free(temp);
      }
     else{
	while(temp->next!=NULL)
	temp=temp->next;
	temp->previous->next=NULL;
	free(temp);
	}printf("\ndeletion success!!!");
  }
}
void deletespecific(int delvalue)
{
  if(head==NULL)
  printf("list is empty!!!deletion not possible!!!");
  else
  {
  struct Node *temp=head;
  while(temp->data!=delvalue)
  {
    if(temp->next==NULL)
    {
    printf("\n given node is not found in the list!!!");
    goto functionend;
    }
    else
    {
    temp=temp->next;
    }
  }
  if(temp==head)
  {
  head=NULL;
  free(temp);
  }
  else
  { temp->previous->next=temp->next;
  temp->next->previous=temp->previous;
  free(temp);
  }
  printf("\n deletion success!!!");
  }
  functionend:
}
void display()
{
  if(head==NULL)
  printf("\n list empty");
  else
  {
  struct Node *temp=head;
  printf("\n list elements are:\n");
  printf("Null<---");
  while(temp->next!=NULL)
  {
   printf("%d<===>",temp->data);
   }
   printf("%d--->NULL",temp->data);
   }
}


