//Implementation of Stack(static)
//PROGRAM TO CREATE A STACK AND PERFORM PUSH,POP AND DISPLAY OPERATIONS ON THE STACK
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
int ch;
while(1)
{
printf(" enter your choice(1-4):\n  for push press 1 \n for pop:2 \n for display :3 \n for exit:4\n");
scanf("%d",&ch);

 switch(ch)
 {
   case 1:push();
	  break;
   case 2:pop();
	  break;
   case 3:display();
	  break;
   case 4:exit(0);
   default: printf("\n wrong choice!! \n");
   }
 }
  getch();
 }
void push()
{
  int val;
  if(top==MAX-1)
 {
  printf("\n stack is full!!");
  }
  else
  {
  printf("\n enter element to push:");
  scanf("%d",&val);
  top=top+1;
  stack[top]=val;
  }
}
void pop()
{
 if(top==-1)
 {
  printf("\n stack is empty!!");
    }
     else
 {
  printf("\n deleted element is %d",stack[top]);
  top=top-1;
  }
 }
void display()
{
int i;
if(top==-1)
  {
  printf("\nstack is empty!!");
  }
  else
  {
   printf("\n stack is...\n");
   for(i=top;i>=0;--i)
    printf("%d\n",stack[i]);
  }
}



