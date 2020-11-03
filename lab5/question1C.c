#include<stdio.h>
int main()
{
	int size;
	int element;
	int even=0;
	int odd=0;
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
    	printf("%d\n",array[i]);
    }
    for(int j=0;j<size;j++)
    {
    	if(j%2==0)
    	{
    		even=even +array[j];
    	}
    		
    	else
    	{
    		odd=odd + array[j];
    		
    	}

    }
    printf("the sum of even is:%d\n",even);
    printf("the sum of odd is:%d\n",odd);
    
}