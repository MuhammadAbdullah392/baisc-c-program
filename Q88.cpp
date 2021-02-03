#include<stdio.h>
int main()
{
	int age;
	printf("enter your age=");
	scanf("%d",&age);
	 if(age>=13)
	   if(age<=19)
      printf("teenager=true");
	  else
	  printf("teenger=false");	
      else if(age<13)
	   printf("teenager=false"); 
} 
