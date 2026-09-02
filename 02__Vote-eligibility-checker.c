/* Determines whether a person meets the minimum age requirement for voting in India.*/
#include <stdio.h>

int main(void) {
    int age;
    printf("____Vote Eligibility Checker____\n");

    // Prompt the user to enter their age.

    printf("Enter your age: ");
    scanf("%d", &age);

    // Validate the input and reject zero or negative ages.

    if (age < 1) {
        printf("Invalid age entered!");
    }
    // Check whether the user meets the minimum voting age requirement.

    else if (age >= 18) {
        printf("You are eligible to vote.");
    } 
    // If the age is less than 18 , then the user won't be able to pass the eligibility test.
    
    else {
        printf("You are not eligible to vote.");
    }

    return 0;
}
