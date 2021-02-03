#include<stdio.h>
int main()
{
	int item,month,day,year;
    float unitprice;
	printf("enter item number: ");
	scanf("%d",&item);
	printf("enter unit price: ");
	scanf("%f",&unitprice);
	printf("enter purchase date mm/dd/yyyy: ");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("    item=\t%d",item);
	printf("   unit price=\t$%f",unitprice);
    printf("    purchase date=\t%02d/%02d/%04d",month,day,year);
	
	
	
}
