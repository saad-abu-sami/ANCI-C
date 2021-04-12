/*********************************************************
*		INT SUM APPEND				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.5 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	FILE *f1;
	f1 = fopen("5-DATA","r");
	int a,sum = 0;
	while(fscanf(f1,"%d",&a) != EOF)
		sum += a;
	fclose(f1);
	f1 = fopen("5-DATA","a");
	fprintf(f1," \n %d",sum);
	fclose(f1);
	return 0;
}
