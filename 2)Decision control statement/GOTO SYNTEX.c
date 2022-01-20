#include<stdio.h>
int main()
{
	int i=7,j=7;
	char c=2,d=3;
	for(i=0;i<=7;i++)
		for(j=0;j<=7;j++)
			if(j=i==7)
				goto enj;
			else
				printf("%d%d",i,j);
	enj:
		printf("%c",c);
}
