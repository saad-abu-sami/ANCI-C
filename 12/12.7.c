/*********************************************************
*		OFFSET PRINTING				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.7 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	char fname[100];
	int offset;

	printf("Enter the Name of File With Extension: ");
	scanf("%s",fname);
	printf("Enter the Value of Offset: ");
	scanf("%d",&offset);

	FILE *f1;
	f1 = fopen(fname,"r");

	int line = 0;
	char ch;

	while(1)
	{
		ch = getc(f1);
		if(ch == EOF)
		{
			break;
		}
		if(ch == '\n')
			line++;
		else
			continue;
	}
	rewind(f1);
	if(offset < 0) offset = line + offset;

	if(offset > line)
		printf("ERROR");
	else
	{
		int n = offset;
		while(n)
		{
			ch = getc(f1);
			if(ch == '\n')
				n--;
		}
		while((ch = getc(f1)) != EOF)
			putchar(ch);
	}
	return 0;
}