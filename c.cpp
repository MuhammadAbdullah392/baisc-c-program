#include<stdio.h>
int main()
{
  int i,j,k;          //== is a equality operator have more //
 i=3;                 // precedence then expressive operator //
 j=2;          //== thenboth operators are express which are //
  k=1;        //   left associative //
 printf("%d",i<j==j<k);	
                        
}
