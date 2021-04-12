/*********************************************************
*		MOD 12-8 + RANDOM ACCESS		 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.10 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	FILE *f1;
	f1 = fopen("8.out","r");

	int i,a,b;
	int data[5][3];
	for(i=0;i<5;i++)
	{
		fscanf(f1,"%d %d %d",&data[i][0],&data[i][1],&data[i][2]);
	}

	printf("Enter the Product Code: ");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		if(a == data[i][0])
		{
			printf("RECORD FOUND!!! \n");
			printf("Poduct Code: %d \nCost: %d\nQuantity: %d\n",data[i][0],data[i][1],data[i][2]);
			return 0;
		}
	}


	printf("SORRY RECORD NOT FOUND!!!! \n");
	return 0;
}
