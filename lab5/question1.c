#include <stdio.h>
int insert(int num)
{
	printf("%d\n",num );
}
int main()
{
	int  num [4];
	num [0]=1;
	num [1]=3;
	num [2]=5;
	num [3]=8;
	for(int i=0;i<4;i++)
	{
		insert(num[i]);

	}
	
}