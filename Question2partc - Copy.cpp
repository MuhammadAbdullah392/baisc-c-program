#include<stdio.h>
int main()
{
  int i,j,k;          // && || are logical operaters //
 i=5;                 // they have same percedence but //
 j=0;          // they are left associative //
 k=-5;                    // 5and0=0          //
 printf("%d",i&&j||k);	//   0or-5=1       //
                        //because 0 means false //
						//and any other integer is true//
						//considered true//
}
