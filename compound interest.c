#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Accepting user input, and reading it using 'scanf'
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    interest = (principal * time * rate) / 100;

    // Displaying the result
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}
