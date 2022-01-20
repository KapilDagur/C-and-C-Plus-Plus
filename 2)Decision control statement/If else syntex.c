#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("%d is divisiable by 2",num);
	else
	printf("%d is not divisible by 2",num);
}
