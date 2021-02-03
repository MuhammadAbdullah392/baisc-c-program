#include<stdio.h>
int main()
{
	int sum=0,x;
	printf("Enter no u want=\n");
	do{
		printf("Entered value is %d\n",x);
		scanf("%d",&x);
		sum=sum+x;
		if(x==0){
		break;
		}
		
	}while(1);
	printf("summation of entered no is=%d",sum);
	return 0;
}
