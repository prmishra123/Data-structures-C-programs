//program to implement SELECTION SORT

#include<stdio.h>
#include<conio.h>
void main(){
 int size,i,j,temp,a[50];
 clrscr();
 printf("enter the size of array:");
 scanf("%d",&size);
 printf("enter %d integer values:",size);
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);

 for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
    if(a[i]>a[j])
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
 }
}
  printf("list after sorting is:");
  for(i=0;i<size;i++)
  printf("\t%d",a[i]);
  getch();
}