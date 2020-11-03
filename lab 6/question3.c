#include<stdio.h>
#include<math.h>
int product(int *i,int *j)
{
   int mul=*i**j;
   return mul;
}
int mean(int *i,int *j)
{
	int mid=(*i+*j)/2;
}
int deviation(int *i,int *j)
{
	int sum=*i+*j;
	int mean=sum/2;
	float SD=pow(sum-mean,2);
	return sqrt(SD/2);
}
int main()
{
	int a,b,mul;
	printf("give the value of a:");
	scanf("%d",&a);
	printf("give the value of b:");
	scanf("%d",&b);
	printf("the product is:%d\n",product(&a,&b));
	printf("the mean is:%d\n",mean(&a,&b));
	printf("the standard deviation is:%d",deviation(&a,&b));
	return 0;
}




