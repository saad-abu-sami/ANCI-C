/*********************************************************
*		COPY FILE CONTENT			 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.1 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	FILE *f1,*f2;
	f1 = fopen("1.in","r");
	f2 = fopen("1.out","w");
	char ch;
	while((ch = getc(f1)) != EOF)
	{
		putc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}