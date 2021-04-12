#include <stdio.h>

void main()
{
   int i,m,j,a=1;
   printf("Enter a number : ");
   scanf("%d",&m);
   for(i=1;i<=m;i++) // if m=3 i<m 1<3;
   {
       a=1;
       for(j=1;j<=i;j++) // i=1 so j=i 1=1;
       {
           a=a*j; //so 1*1=1;
       }// here j++ so j=1+1=2;
       printf("%d!=\t%d\n",i,a); //1! = 1;
   } //here i++ so 1+1=2;
}
