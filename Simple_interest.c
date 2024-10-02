#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;

    // Accepting user input
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate the amount after time t
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Display the results
    printf("The compound interest is: %.2lf\n", compoundInterest);
    printf("The total amount after %.2f years is: %.2lf\n", time, amount);

    return 0;
}
