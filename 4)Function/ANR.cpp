#include<stdio.h>
int sum(int,int);
int main()
{
	int A,B,C;
	printf("Enter A and B\n");
	scanf("%d%d",&A,&B);
	sum(A,B);
}
int sum(int A,int B)
{
	A=A+B;
	printf("Sum of A and B = %d",A);
};
