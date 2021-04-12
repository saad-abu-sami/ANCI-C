/*********************************************************
*		Length of String			 *
*	Author: Reez Patel				 *
*	Source: Ex: 7.11 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n=0;
	char ch;
	printf("Enter a String!! \n");
	while((ch = getchar()) != '\n')
		n++;

	printf("Length of the String: %d \n",n);
	return 0;
}