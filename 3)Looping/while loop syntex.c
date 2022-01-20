#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Reverse counting from %d to 1\n",num);
	while(num>0)
	{
	printf("%d\n",num);
	num--;
	}
}
