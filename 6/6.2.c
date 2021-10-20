#include <stdio.h>
int main(){
    int i, fact = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // we make thats number factorial.
    // if the number is 6 then its factorial is 6! = 6*5*4*3*2*1 = 120
    for (i = 1; i <= number; i++){
        // always factorial starts with 1.
        //i start with 1 and go untill the number we enter
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", number, fact);
    return 0;
}
