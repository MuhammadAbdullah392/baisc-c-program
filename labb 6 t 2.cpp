#include<stdio.h>
int main()
{
	int month,day,year;
	printf("enter date in form mm/dd/yyyy\n");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("number=%04d%02d%02d", year,month,day);
	return 0;
}
