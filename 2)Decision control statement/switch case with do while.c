#include<stdio.h>
int main()
{
	int ch;
	float A,B;
	printf("Perfrom Addition Press 1\n");
	printf("Perfrom Substract Press 2 \n");
	printf("Perfrom Multiplication Press 3 \n");
	printf("Perfrom Division Press 4\n");
	printf("Enter Your Choice\n");
	scanf("%d",&ch);
	printf("Enter two number\n");
	printf("Enter \nA = ");
	scanf("%f",&A);
	printf("Enter \nB = ");
	scanf("%f",&B);
	switch(ch)
	{
	case 1:
		A=A+B;
		printf("Addititon of A and B is %f\n",A);
		break;
	case 2:
		A=A-B;
		printf("Substraction of A and B is %f\n",A);
		break;
	case 3:
		A=A*B;
		printf("Multiplication of A and B is %f\n",A);
		break;
	case 4:
		A=A/B;
		printf("Division of A and B is %f\n",A);
		break;
	default:
		printf("Your choice is invalid!!\n");
	}
}
