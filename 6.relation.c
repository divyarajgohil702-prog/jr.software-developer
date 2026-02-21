#include<stdio.h>
void main()
{
   int a=19,b=17;
   printf("%d=%d==%d",a==b,a,b);
   printf("\n%d=%d!=%d",a!=b,a,b);
   printf("\n%d=%d<%d",a<b,a,b);
   printf("\n%d=%d>%d",a>b,a,b);
   printf("\n%d=%d>=%d",a>=b,a,b);
   printf("\n%d=%d<=%d",a<=b,a,b);
}