#include <stdio.h>

int main()
{
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);
	
	while(n > 0)
	{
		printf("%d",n%10);
		n = n/10;
	}
	printf("\n");
	return 0;
}
