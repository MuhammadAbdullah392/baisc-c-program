#include<stdio.h>
int main()
{
  int age;
  char g,h,p;
  printf("enter health(e for excellent and p for poor)");
  scanf("%c",&h);
  printf("enter place(c is for city and v is for village)");
  scanf("%c",&p);
  printf("enter gender(m for male and f for female)");
  scanf("%c",&g);
  printf("enter age");
  scanf("%d",&age);
  if((h=='e')&&(p=='c')&&(g=='m')&&(age>=25||age<=35))
   printf("\nthe premium is Rs.4 Per thousand and total cannot exceed Rs.2 lakhs");
   else if ((h=='e')&&(p=='c')&&(g=='f')&&(age>=25||age<=35))
   printf("\n the premium is Rs.3 per thousand and total cannot exceed Rs.1 lakhs");
   else if((h=='p')&(p=='v')&&(g=='m')&&(age>=25||age<=35))
   printf("\n The person is RS.6 per thousand and total amount cannot exceed Rs 10000");
   else
   printf("\n the person is not insured");
}
     
