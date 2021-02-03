#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three integers to find which one is greater=");
	scanf("%d %d %d",&a,&b,&c);
	// declare three veriables//
	if(a>=b && a>=c)
	printf("%d is the greatest of all",a);
	else if (b>=a && b>=c)
	printf("%d is greatest of all",b);
	else
	printf("%d greatest if all",c);
}
