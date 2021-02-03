#include <stdio.h>
int main()
 {
    int num;
    printf("  Enter an integer = ");
    scanf("%d", &num);
    printf("\n");
    if (num % 2 == 0) 
	 printf("%d is even.", num);
	 else
	  printf("%d is odd.", num);
}
    

