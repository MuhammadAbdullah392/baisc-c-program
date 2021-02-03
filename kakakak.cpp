#include<stdio.h>
int main()
{
	int sum=0,x;
	printf("Enter no u want=\n");
	do{
		scanf("%d",&x);
		printf("Entered value is %d\n",x);
		sum=sum+x;
		
	}while(x<=1);
	printf("summation of entered no is=%d",sum);
	return 0;
}
