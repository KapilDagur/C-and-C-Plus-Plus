#include<stdio.h>
int main()
{
	int i=10,num,mul;
	printf("Enter a number to print their table\n");
	scanf("%d",&num);
	mul=num;
	printf("The table of %d is as follow\n",num);
	for(i=1;i<=10;i++)
	{
		mul=num*i;
		printf("%d X %d = %d\n",num,i,mul);
	}
}
