#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter telephone no: \n");
	scanf("%d %d-%d",&a,&b,&c);
	printf("no u entered=%03d.%03d.%04d",a,b,c);
}
