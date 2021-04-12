/*********************************************************
*		PRODUCT DATA				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.8 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i;
	int input;
	FILE *f1;
	f1 = fopen("8.out","w");
	for(i=0;i<5;i++)
	{
		printf("Enter Details of PRODUCT %d -> \n",i+1);
		printf("Enter the Product Code: ");
		scanf("%d",&input);
		fprintf(f1,"%d ",input);
		printf("Enter the Product Cost: ");
		scanf("%d",&input);
		fprintf(f1,"%d ",input);
		printf("Enter the Number of Items: ");
		scanf("%d",&input);
		fprintf(f1,"%d\n",input);
	}

	return 0;
}