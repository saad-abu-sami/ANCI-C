/*********************************************************
*		SPL. FILE COPY				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.6 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char filein[100],fileout[100],key[100],word[100];
	printf("Enter the Name of Input file with extension: ");
	scanf("%s",filein);
	printf("Enter the Name of Output file with extension: ");
	scanf("%s",fileout);
	printf("Enter the Word to pe Removed: ");
	scanf("%s",key);
	FILE *f1,*f2;
	f1 = fopen(filein,"r");
	f2 = fopen(fileout,"w");
	while(fscanf(f1,"%s",word) != EOF)
	{
		if(strcmp(key,word) != 0)
			fprintf(f2,"%s",word);
		char ch = getc(f1);
		putc(ch,f2);
	}
	return 0;
}