/*********************************************************
*		FILE COMPARE				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.3 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	FILE *f1,*f2;
	f1 = fopen("3a.in","r");
	f2 = fopen("3b.in","r");
	char ch1,ch2;
	while(((ch1 = getc(f1)) != EOF) && ((ch2 = getc(f2)) != EOF))
	{
		if(ch1 == ch2)
			continue;
		else
		{
			return 1;
			break;
		}
	}

	fclose(f1);
	fclose(f2);
	return 0;
}