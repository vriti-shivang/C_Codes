#include<stdio.h>
#include<conio.h>
int main()
{
	int a,p,r,t;
	printf("enter the principal ");
	scanf("%d",&p);
	printf("enter the rate ");
	scanf("%d",&r);
	printf("enter the time ");
	scanf("%d",&t);
	a=(p*r*t)/100;
	printf("Simple interst is %d",a);
}
