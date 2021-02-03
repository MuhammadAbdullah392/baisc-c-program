#include<stdio.h>
int main()
{
	int i,sum=0,x;
	printf("enter any natural number=");
	scanf("%d",&x);
	printf("no you have entered is=%d\n",x);
	for (i=1;i<=x;++i)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("total sum of entered natural no is is equal=%d",sum);
}
