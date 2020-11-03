#include <stdio.h>


int main()
{
	int size;
	int element;
	int delete;
    printf("enter the size:");
    scanf("%d",&size);
    int array[size];

    for(int value=0;value<size;value++)
    {
       printf("enter your element:");
       scanf("%d",&element);
       array[value]=element;

    }
    for(int i=0;i<size;i++)
    {
    	//printf("the first array is:\n");
    	printf("%d\n",array[i]);
    }
    printf("enter the size of element to delete:");
    scanf("%d",&delete);
    if(delete<0||delete>size)
    {
    	printf("error");
    }
    else{
    	for(int i=delete-1;i<size-1;i++)
    	{
    		array[i]=array[i+1];
    	}
    	size--;
    	for(int i=0;i<size;i++)
    	{
    		
    		printf("%d",array[i]);

    	}
    }


}