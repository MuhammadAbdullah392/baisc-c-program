#include<stdio.h>
int main()
{
	int sum=0,x;
	do{
		printf("enter the number u want");
		scanf("%d",&x);
		sum=sum+x;
		if(x==0){
			break;
		}
	}while(x);
	printf("summation of entered value is=%d",sum);
}
