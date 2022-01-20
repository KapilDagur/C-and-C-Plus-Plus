#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num>=100)
	{
		if(num>=1000)
		printf("%d is greater then 1000(include 1000)",num);
		else
		printf("%d is less then 1000(Not include 1000) and greater then 100 (include 100)",num);
	}
	else
	{
		if(num<=50)
		printf("%d is less then 50(include 50)",num);
		else
		printf("%d is greater then 50(Not include 50)and less then 100(Not include 100)",num);
	}
}
