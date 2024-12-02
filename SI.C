#include<stdio.h>
#include<limits.h>
int main()
{
int p,n;
float r,si;
clrscr();
printf("enter  values of p:");
scanf("%d",&p);
printf("enter value of n:");
scanf("%d",&n);
printf("enter  values of r:");
scanf("%f",&r);
si=p*n*r/100;
printf("simple interest =%f",si);
printf("\n%d",INT_MAX);
printf("\n%d",INT_MIN);
getch();
return 0;
}