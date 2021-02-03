#include<stdio.h>
int main()
{
	int i=7;
	int j=8;
	int k=9;
	printf("%d", (i=j) || (j=k));
	printf("%d %d %d",i,j,k);	
}
