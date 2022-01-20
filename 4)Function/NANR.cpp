#include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int A,B;
	printf("Enter A and B\n");
	scanf("%d%d",&A,&B);
	A=A+B;
	printf("Sum of A and B = %d",A);
};
