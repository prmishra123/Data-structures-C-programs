//program to implement MERGE SORT
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mergesort(int[],int,int,int);
void partition(int[],int,int);

void main()
{
int a[50],i,j,low,high,mid,n,b[10];
clrscr();
printf("enter the no of integerin array");
scanf("%d",&n);
printf("enter the %d integers",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
partition(a,0,n-1);
printf("after merrge sort:\n");
for(i=0;i<n;i++)
{
 printf("\t%d",a[i]);
 }
 getch();
}
void partition(int a[],int low,int high)
{
  int mid;
  if(low<high)
  {
   mid=(low+high)/2;
   partition(a,low,mid);
   partition(a,mid+1,high);
   mergesort(a,low,mid,high);
   }
  }
  void mergesort(int a[],int low,int mid,int high)
  {
  int i,mi,k,lo,temp[10];
  lo=low;
  i=low;
  mi=mid+1;
  while((lo<=mid)&&(mi<=high))
  {
  if(a[lo]<=a[mi])
  {
  temp[i]=a[lo];
  lo++;
  }
  else
  {
  temp[i]=a[mi];
  mi++;
  }
  i++;
}
if(lo>mid)
  {
  for(k=mi;k<=high;k++)
  {
  temp[i]=a[k];
  i++;
  }
}
else
{
  for(k=lo;k<=mid;k++)
  {
  temp[i]=a[k];
  i++;
  }
}
  for(k=low;k<=high;k++)
  {
  a[k]=temp[k];
  }
}
