#include<stdio.h>
int main()
{
	int a,b=0,sum;
	printf("enter any no=");
	scanf("%d",&a);
	do{
		printf("enter no is=%d\n",b);
		b=b+1;
	}while(b<a);
	sum=b;
	printf("sum is%d",sum);
	
	
}
