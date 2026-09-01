#include <stdio.h>

int main()
{
    // Declare variables for principal, rate, and time
    float p;
    float r;
    float t;

    // Display the calculator title
    printf("____Simple Interest Calculator____ \n");

    // Read the principal amount from the user
    printf("The value of principal is ");
    scanf("%f", &p);

    // Read the interest rate from the user
    printf("The value of rate is ");
    scanf("%f", &r);

    // Read the time period from the user
    printf("The value of time is ");
    scanf("%f", &t);

    // Display the simple interest formula
    printf("The formula of simple interest is = principal x rate x time\n");

    // Calculate and display simple interest
    // Formula: Simple Interest = (Principal × Rate × Time) / 100
    
    printf("The simple interest is : %f", (p * r * t) / 100);

    return 0;
}
