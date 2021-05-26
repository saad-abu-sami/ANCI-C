#include <stdio.h>
#include <math.h>

int main(){
	int n, row, col;
	printf("Enter N = ");
	scanf("%d", &n);
	for(row=1 ; row<=n ; row++){
		for(col=1 ; col<=n-row ; col++){
			printf(" ");
		}
		for(col=1 ; col<=2*row-1 ; col++){
			printf("%c",row+96);
		}
		printf("\n");
	}
	for(row = n-1 ; row >= 1 ; row--){
		for(col = 1 ; col <= n-row ; col++){
			printf(" ");
		}
		for(col=1 ; col<=2*row-1 ; col++){
			// on first row
			// (2*5-1)=9, so 9 sign print on first row
			printf("%c",row+96);
		}
		printf("\n");
	}
}
