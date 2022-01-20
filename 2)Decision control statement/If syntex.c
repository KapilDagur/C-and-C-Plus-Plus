#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is divisiable by 2",a);
	}
	if(a%2!=0)
	{
		printf("%d is not divisiable by 2",a);
	}
} 
