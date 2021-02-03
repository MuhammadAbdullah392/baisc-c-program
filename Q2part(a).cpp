#include<stdio.h>
int main()
{
  int i,j;   // < then !//
  i=10;       // relation operator have high precedence //
   j=5;         //then logical operators//
 printf("%d", !i<j);
}
