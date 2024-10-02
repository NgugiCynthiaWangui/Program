#include <stdio.h>

int main() {
    int Book_ID, Due_Date, Return_Date, Days_Overdue;
    float Fine_Rate = 0.0, Fine_Amount = 0.0;  // Use float for rate and amount

    // Input Book ID
    printf("Enter Book ID: ");
    scanf("%d", &Book_ID);

    // Input Due Date
    printf("Enter Due Date: ");
    scanf("%d", &Due_Date);

    // Input Return Date
    printf("Enter Return Date: ");
    scanf("%d", &Return_Date);

    // Calculate Days Overdue
    Days_Overdue = Return_Date - Due_Date;
    printf("Days Overdue: %d\n", Days_Overdue);

    // Calculate Fine Rate and Amount
    if (Days_Overdue <= 0) {
        printf("No fine, the book is returned on time or early.\n");
    } else if (Days_Overdue <= 7) {
        Fine_Rate = 20.0;
    } else if (Days_Overdue <= 14) {
        Fine_Rate = 50.0;
    } else {
        Fine_Rate = 100.0;
    }

    // Calculate Fine Amount
    Fine_Amount = Fine_Rate * Days_Overdue;

    // Output results
    if (Days_Overdue > 0) {
        printf("Fine Rate: Ksh %.2f per day\n", Fine_Rate);
        printf("Total Fine Amount: Ksh %.2f\n", Fine_Amount);
    }

    return 0;
}
