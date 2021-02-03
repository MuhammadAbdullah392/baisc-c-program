#include<stdio.h>
int main()
{
	int a=14;
 for(;;)
	{
		++a;
	if(a>=16 && a<=18)		
	{
		continue;
	}
	printf("%d",a);
    }
}
