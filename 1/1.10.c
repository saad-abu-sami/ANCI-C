/*********************************************************
*		AREA OF TRIANGLE			 *
*	Author: Reez Patel				 *
*	Source: Ex: 1.10 (P-21) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

#define S ((a+b+c)/2)

int main()
{
	int a = 10,b=10,c=10;
	float area = sqrt(S*(S-a)*(S-b)*(S-c));
	printf("If A=%d, B=%d, C=%d, \nThen the Area of Traingle is: %f",a,b,c,area);	

	return 0;
}
