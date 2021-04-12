/*********************************************************
*		FILE APPEND				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.4 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	FILE *f1,*f2;
	f1 = fopen("4.in","r");
	f2 = fopen("4.out","a");

	char ch;
	while((ch = getc(f1)) != EOF)
	{
		putc(ch,f2);
	}

	fclose(f1);
	fclose(f2);
	return 0;
}
