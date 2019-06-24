//program to implement EXCHANGE SORT
#include <stdio.h>

	void sort( int [], int );

	void sort( int a[], int elements )
	{
		int i, j, temp;

		i = 0;
		while( i < (elements - 1) ) {
			j = i + 1;
			while( j < elements ) {
				if( a[i] > a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
				j++;
			}
			i++;
}
	}

	main()
	{
		int numbers[] = { 10, 9, 8, 23, 19, 11, 2, 7, 1, 13, 12 };
		int loop;
printf("Before the sort the array was \n");
		for( loop = 0; loop < 11; loop++ )
			printf(" %d ", numbers[loop] );
		sort( numbers, 11 );
		printf("After the sort the array was \n");
		for( loop = 0; loop < 11; loop++ )
			printf(" %d ", numbers[loop] );
	}

	main()
	{
		int numbers[] = { 10, 9, 8, 23, 19, 11, 2, 7, 1, 13, 12 };
		int loop;

		printf("Before the sort the array was \n");
		for( loop = 0; loop < 11; loop++ )
			printf(" %d ", numbers[loop] );
		sort( numbers, 11 );
		printf("After the sort the array was \n");
		for( loop = 0; loop < 11; loop++ )
			printf(" %d ", numbers[loop] );
	}
