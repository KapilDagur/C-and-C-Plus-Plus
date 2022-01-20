#include<stdio.h>
int main()
{
	//single line comment
	/*
	Multiline comment
	*/
	int a=100;
	float b=3.14732;
	char c='C';
	long d=23456788;
	double e=1234567889;
	printf("%d\t%f\t%c\t%ld\t%lf",a,b,c,d,e);//%d->integer,%f->float,%c->character,%ld->long,%lf->double
	printf("\n%d\n%f\n%c\n%ld\n%lf",a,b,c,d,e);// \t->for tab,\n->new line
}
