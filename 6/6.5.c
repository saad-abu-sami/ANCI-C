#include <stdio.h>
int main()
{
	int i, n;
	printf("Enter your number to reverce :  \n");
	scanf("%d",&n);
	printf("Reverce of %d is : ",n);
	for(i=0;n!=0;i++)
	{
	    printf("%d",n%10);
	    n=n/10;
	}

	return 0;
}