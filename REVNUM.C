#include<stdio.h>
void main()
{
	int n,d5,d4,d3,d2,d1;
	long int revnum;
	clrscr();
	printf("\n enter a five digit number(less than 32767):");
	scanf("%d",&n);
	d5=n%10;
	n=n/10;
	printf("\n value of d5=%d",d5);
	printf("\n value of n=%d",n);
	getch();
	}