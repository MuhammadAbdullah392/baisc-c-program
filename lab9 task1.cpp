#include<stdio.h>
int main()
{
	int a;  //declare veriable being used //
	printf("enter a number to check whether it is even or odd =  ");
	scanf("%d",&a);
	printf("\n");
	 // if no is porfectly divisible by 2//
	if( a % 2 == 0  )
    	printf("%d number you have entered is even\n",a);
	 else
	 printf("%d number you have entered is odd\n",a);
}
