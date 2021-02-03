#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first three digit then next three then last 4\n");
	printf("enter no in form (xxx) xxx-xxxx:\n");
	scanf("%d%d%d",&a,&b,&c);

	
	printf("number=%03d.%03d.%04d", a, b, c);
	return 0;
}
