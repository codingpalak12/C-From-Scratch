// This program checks whether the given integer is even or odd.

#include <stdio.h>

int main() {
    // Declare a variable to store the users input.
    int n;

    printf("____Even Odd Checker____\n");

    // Prompt the user to enter an integer.
    printf("Enter a number : \n");
    scanf("%d", &n);

    // Check whether the number is divisible by 2.
    if (n % 2 == 0) {
        // A remainder of 0 means the number is even.
        printf("The given number is an Even number.");
    } 
    else if (n % 2 != 0) {
        // A non-zero remainder means the number is odd.
        printf("The given number is an Odd number.");
    }
    else {
        printf("Invalid input entered!");
        // Any other invalid input will be eliminated.
    }

    // Indicate that the program ended successfully.
    return 0;
}