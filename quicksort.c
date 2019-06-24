//program to implement QUICK SORT.
#include<stdio.h>
#include<conio.h>
#define max 50
int a[max],n,i,l,h;
clrscr();
void main()
{
 void input(void);
 input();
 getch();
 }
 void input(void)
 {
 void quick_sort(int a[],int l,int h);
 void output(int a[],int n);
 printf("how many elements in array:");
 scanf("%d",&n);
 printf("\n");
 printf("enter the elements:\n");
 for(i=0;i<=n-1;i++)
 {scanf("%d",&a[i]);
 }
 l=0;
 h=n-1;
 quick_sort(a,l,h);
 printf("sorted array:\n");
 output(a,n);
 }
 void quick_sort(int a[],int l,int h)
 {
 int temp,key,low,high;
 low=l;
 high=h;
 key=a[(low+high)/2];
 do
 {
  while(key>a[low])
  {
  low++;
  }
  while(key<a[high])
  {
  high--;
  }
  if(low<=high)
  {
  temp=a[low];
  a[low++]=a[high];
  a[high--]=temp;
  }
 }
 while(low<=high);
 if(l<high)
 quick_sort(a,l,high);
 if(low<h)
 quick_sort(a,low,h);
 }
 void output(int a[],int n)
 {
 for(i=0;i<=n-1;i++)
 {
  printf("%d\n",a[i]);
  }
 }
