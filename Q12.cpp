#include<stdio.h>
int main()
{
	char x;
	printf("enter value of x=");
	scanf("%d",&x);
	if(x>=65&&x<=90)
	printf("entered character is a capital letter");
	else if(x>=97&&x<=122)
     printf("entered character is a small letter");
	 else if(x>=48&&x<=57)
	printf("enetered character is a digit");
 else
  printf("entered character is a special symbol");
}
