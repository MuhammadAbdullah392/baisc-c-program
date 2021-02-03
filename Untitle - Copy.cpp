#include<stdio.h>
int main()
{
	int x,y,z,a,b;
    x=10;
	printf("the value of x=%d\n",x);
	y=++x;
	printf("the value of ++x is:%d\n",x);
	printf("now the value of x is:%d\n\n",y);
	z=x++;
    printf("the value of x++ is:%d\n",z);
    printf("now the value of x is:%d\n\n",x);
    a=--x;
	printf("the value of --x is:%d\n",a);
	printf("the value of x is:%d\n\n",x);
	b=x--;
	printf("the value of x-- is:%d\n",b);
	printf("thw value of x is :%d\n",x);	
}
