#include <stdio.h>
int largest(int arr[3][5][5],int n)
{
	int i,j,k;
	int max = arr[0][0][0];
	for (i = 0; i < 3; i++)
	{
	for(j = 0; j < 5; j++ )
	{
	for (k = 0; k < 5; ++k)
	{
	if (arr[i][j][k] > max)
	max = arr[i][j][k];
	// printf("arr[%d][%d][%d] = %d \n",i,j,k,arr[i][j][k] );
	}
	}
	}
	return max;
}
int main()
{
	int arr[3][5][5] =
	{
	{
	102, 34, 75, 0, 88,
	110, 24, 5, 9, 8,
	150, 32, 5, 0, 188,
	106, 3, 4, 9, 968,
	107, 2, 5, 0, 98
	},
	{
	102, 34, 75, 0, 88,
	110, 24, 5, 9, 8,
	150, 32, 5, 0, 188,
	106, 3, 4, 9, 968,
	107, 2, 5, 0, 98
	},
	{
	102, 34, 75, 123, 88,
	110, 24, 5, 9, 8,
	150, 3231, 5, 124, 100,
	106, 3, 4, 9, 968,
	107, 2, 5, 34, 90
	}
	};
	int n = sizeof(arr)/sizeof(arr[0][0][0]);printf("Largest in given array is %d\n", largest(arr, n));
	return 0;
}