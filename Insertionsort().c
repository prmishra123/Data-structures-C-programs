//program to implement insertion sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp,a[10];
	clrscr();
	printf("enter the size of the list:");
	scanf("%d",&n);
	printf("enter %d integer values:",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	//insertion sort logic
	for(i=1;i<n;i++){
	temp=a[i];
	j=i-1;
	while((temp<a[j])&&(j>=0)){
	a[j+1]=a[j];
	j=j-1;
	}
	a[j+1]=temp;
	}
	printf("list after sorting is:");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
getch();
}