#include<stdio.h>
int main()
{
	int x,y;
	char a;
   	printf("Enter intput values of x=");
	scanf("%d",&x);
	printf("Enter intput values of y=");
	scanf("%d",&y);
	
	printf("enter operation (* - + /)=");
	scanf("%c",&a);
	switch(a)
	{
		case '+':
			printf("sum of input is=%d",x+y);
			break;
		case '-':
		    printf("negation of input no is=%d",x-y);
			break;
		case '/':
		    printf("division of input no is=%d",x/y);
			break;
		case '*':
		    printf("product of input no is=%d",x*y);
			break;
		defualt:
		    printf("entered input in invalid");
   }
	
}
