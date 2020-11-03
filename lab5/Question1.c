#include <stdio.h>
int insert()
{
    int array[100] = {0};
    int size = 10;
    for(int i = 0; i < 10; i++)
  	{
     array[i] = i+1;
	}
	for(int i = 0; i < size; i++)
	{
	printf("%d ", array[i]);
	}
	printf("\n");
	int x;
	printf("Enter the number you want to add: ");
	scanf("%d", &x);
	int y;
	printf("Enter the position you want to add: ");
	scanf("%d", &y);
	y = y + 1;
	size++;
	for(int i = size-1; i >= y; i--)
	{
	array[i] = array[i-1];
	}
	array[y-1] = x;
	for(int i = 0; i < size; i++)
	{
	printf("%d ", array[i] );
	}
	printf("\n");
	}int delete()
	{
	printf("\n\nNow For Deletion of element..\n");
	int arr[100];
	int posi;
	int v;
	int size;
	printf("\nEnter the size of array: ");
	scanf("%d", &size);
	printf("Enter %d elements: \n",size);
	for(v = 0; v < size; v++)
	{
	scanf("%d", &arr[v]);
	}
	printf("Enter the location you want to delete from: \n");
	scanf("%d", &posi);
	if(posi >= size+1)
	{
	printf("\n Not possible cause the position you added is more than the size of array. \n");
	}
   else
  {
	for(v = posi-1; v < size-1; v++)
	{
	arr[v]= arr[v+1];
	}
	printf("Final array after removal is: \n");
	for(v = 0; v < size-1; v++)
	{
	printf("%d ", arr[v]);
	}
   }
}
int operation()
{
	printf("\n\n\nNow For sum of even and odd numbers from array..\n");
	int mat[10];
	int size;
	int even = 0, odd = 0;printf("Enter the size of array: \n");
	scanf("%d", &size);
	printf("Enter the array elements: \n");
	for(int i = 0; i < size; i++)
	{
	scanf("%d", &mat[i]);
	}
	for(int i = 0; i < size; i++)
   {   
	if(mat[i]%2 == 0)
	{
	even = even + mat[i];
	}
	else
	{
	odd = odd + mat[i];
	}
   }
	printf("\n The sum of even numbers are: %d", even);
	printf("\n The sum of odd numbers are: %d\n", odd);
 }
int con()
{
	int ay[10];
	int a[5] = {0, 2, 4, 6, 8};
	int b[5] = {1, 3, 5, 7, 9};
	int loop, index, a_len, b_len;
	a_len = b_len = 5;
	index = 0;
	for(loop = 0; loop < a_len; loop++)
	{
	ay[index] = a[loop];
	index++;
	}
	for(loop = 0; loop < b_len; loop++)
	{
	ay[index] = b[loop];
	index++;
	}
	printf("\n a = ");for(loop = 0; loop < a_len; loop++)
	{
	printf(" %d", a[loop]);
	}
	printf("\n b = ");
	for(loop = 0; loop < b_len; loop++)
	{
	printf(" %d", b[loop]);
	}
	printf("\nConcatination = ");
	for(loop = 0; loop < 10; loop++)
	{
	printf(" %d", ay[loop]);
	}
	printf("\n");
}
int main()
{
   	insert();
	delete();
	operation();
	con();
	return 0;
}