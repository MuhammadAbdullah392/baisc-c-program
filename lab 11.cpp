#include<stdio.h>
int main()
{
	int x;
	printf("enter any no=");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("today is monday");
			break;
		case 2:
		  		printf("today is tuesday");
				  break;	
		case 3:
		  		printf("today is wednesday");
				  break;
		case 4:
		  		printf("today is thrusday");
				  break;
		case 5:
		  		printf("today is friday");
				  break;
		case 6:
	  		printf("today is saturday");
			  break;
		case 7:
	  		printf("today is sunday");
			  break;
		default:
			printf("invalid input");
					  		  
	}
}


