/*********************************************************
*		INT FILES				 *
*	Author: Reez Patel				 *
*	Source: Ex: 12.2 (P-418) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *f1,*f2,*f3;
	f1 = fopen(argv[1],"r");
	f2 = fopen(argv[2],"r");
	f3 = fopen("2-DATA.out","w");
	int a,b;
	fscanf(f1,"%d",&a);
	fscanf(f2,"%d",&b);
	while(1)
	{
		if(a<b)
		{
			fprintf(f3,"%d ",a);
			if(fscanf(f1,"%d",&a) == EOF)break;
		}
		else
		{
			fprintf(f3,"%d ",b);
			if(fscanf(f2,"%d",&b) == EOF)break;
		}
	}
	while(1)
	{
			fprintf(f3,"%d ",a);
			if(fscanf(f1,"%d",&a) == EOF)break;
	}
	while(1)
	{
			fprintf(f3,"%d ",b);
			if(fscanf(f2,"%d",&b) == EOF)break;
	}

	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}