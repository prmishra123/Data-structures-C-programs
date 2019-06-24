//program to implement BUBBLE SORT

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int a[50],n,i,j,temp;
  clrscr();
  printf("no. of elements in array:");
  scanf("%d",&n);
  printf("enter %d integer numbers",n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
  }
}
  printf("sorted elements in ascemnding order:\n");
  for(i=0;i<n;i++)
  printf("\t%d",a[i]);
  getch();
}
 

