// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int x,y;
    x=5;
    y=--x;
    printf("++x=%d\n",++x);
    printf("--x=%d\n",y);
    printf("\tcontent of x\t|\texpression\t|\tbrfore\t|\tafter\n");
    printf("\t5\t\t|\tx++\t\t|\t5\t|\t%d\n",++x);
    printf("\t5\t\t|\tx--\t\t|\t5\t|\t%d\n",y);
}
