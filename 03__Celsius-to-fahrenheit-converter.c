/* This programme converts the temperature from celsius to fahrenheit. It asks the user for a celsius value, applies the conversion formula, and displays the corresponding fahrenheit temperature.*/
#include <stdio.h>

int main() {
    
    printf("____Celsius to Fahrenheit Converter____\n");

    // Declare variables for Celsius and Fahrenheit temperatures.
    float c;
    float f;

    // Convert Celsius to Fahrenheit.
    f = (c * 9 / 5) + 32;

    // Ask the user to enter a Celsius value.
    printf("Enter the value in Celsius : ");

    // Read the Celsius value entered by the user.
    scanf("%f", &c);

    // Display the converted Fahrenheit value.
    printf("The value of %f degree celsius in fahrenheit is %f", c, f);

    // Indicate that the program completed successfully.
    return 0;
}