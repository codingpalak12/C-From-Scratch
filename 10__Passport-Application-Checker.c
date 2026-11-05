

#include <stdio.h>

int main(void) {

    // Declare variables to store the applicant's details
    int age;
    char citizenship;
    char record;

    // Display the welcome message
    printf("Welcome to Passport Application Checker!\n");

    // Check whether the applicant is an Indian citizen
    printf("Are you an Indian Citizen?\n");
    printf("Enter y or n: ");
    scanf(" %c", &citizenship);

    // Check whether the applicant has any criminal record
    printf("Do you have any criminal record?\n");
    printf("Enter y or n: ");
    scanf(" %c", &record);

    // Get the applicant's age
    printf("Please enter your age in years: ");
    scanf("%d", &age);

    // Evaluate the applicant's details against the specified conditions
    if (citizenship == 'y' && record == 'n' && age >= 18) {

        // Display the message if all conditions are satisfied
        printf("You may proceed with your passport application.\n");

    } else {

        // Display the message if any condition is not satisfied
        printf("You do not meet the eligibility conditions.\n");
    }

    // Return 0 to indicate successful program execution
    return 0;
}

