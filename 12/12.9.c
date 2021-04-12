/*********************************************************
*		MOD OF 12-8				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.9 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define lli long long int
int main()
{
	FILE *f1;
	f1 = fopen("8.out","r");
	lli ans = 0;
	int i,a,b;
	for(i=0;i<5;i++)
	{
		fscanf(f1,"%*d %d %d",&a,&b);
		ans = ans + (lli)a*(lli)b;
	}

	printf("Total: %lld \n",ans);
	return 0;
}