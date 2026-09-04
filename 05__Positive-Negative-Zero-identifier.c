// This programme checks whether the given integer is positive, negative or zero.
#include <stdio.h>
int main () {
    // Declare a variable to store the users input.
    int n ;
    printf("____Positive Negative Zero Identifier____\n");

    // Prompt the user to enter an integer.
    printf("Enter the number : \n");
    scanf("%d", &n);
    // Check whether the number is equal to or greater than 1
    if ( n >= 1 ) {
        printf("The given number is Positive.");
    }
    // Check whether the number is smaller than 1
    else if ( n < 0 ) {
        printf("The given number is Negative.");
    }
    // Check whether the number is 0
    else if ( n == 0 ) {
        printf("The number is Zero.");
    }
    // Analyse the input and eliminate the invalid one
    else {
        printf("Invalid input!");
    }
    // Indicates the successfull completition of the programme
    return 0;

}