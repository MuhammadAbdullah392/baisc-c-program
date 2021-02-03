#include<stdio.h>
int main()
{
    int a,b;
 
    printf("Input the values for a and b  : "); //programm to find which no  //
                                   //	is greater b/w two by using if else statement //
    
    scanf("%d %d", &a,&b);
    if (a > b  )
        printf("a is greater than b\n");
    else
        printf("a is smaller than b\n");
    // greater than equal to//
    if(a>=b)
    printf("a is greater then or equal to b\n");
    else
    printf("a is lesser than b");
} 

