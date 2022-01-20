#include<stdio.h>
int sum(int,int);
int main()
{
	int A,B,C;
	printf("Enter A and B\n");
	scanf("%d%d",&A,&B);
	C=sum(A,B);
	printf("Sum of A and B = %d",C);
}
int sum(int A,int B)
{
	A=A+B;
	return A;
};
