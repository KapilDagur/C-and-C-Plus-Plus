#include<stdio.h>
int sum();
int main()
{
	int A;
	A=sum();
	printf("Sum of A and B = %d",A);
}
int sum()
{
	int A,B;
	printf("Enter A and B\n");
	scanf("%d%d",&A,&B);
	A=A+B;
	return A;
};
