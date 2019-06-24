//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY
#include<stdio.h>
 #include<conio.h>
 int main()
 {       clrscr();
   int array[10],search,c,n;
   printf("enter the number of elements in array\n");
   scanf("%d",&n);

   printf("enter %d integer(s)\n",n);

   for(c=0;c<n;c++)
   scanf("%d",&array[c]);
   printf("enter a no. to search\n");
   scanf("%d",&search);
   for(c=0;c<n;c++)
  {
  if(array[c]==search)
     {
   printf("%d is present at location %d.\n",search,c+1);
   break;
    }
   }
   if(c==n)
    printf("%d is not present in the array.\n",search);
    return 0;
    }

