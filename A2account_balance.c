/*Q2.A bank’s internal tool needs to find out which of two account balances is higher,
but the program cannot use any conditional statements (like if, else, or ternary operators).
Write a C program that:
•	Takes two account balances as input (float).
•	Uses relational and logical operators to determine:
o	Whether both balances are equal.
o	Whether the first balance is greater than the second.
o	Whether the second balance is greater than the first.
•	Displays the results as 1 (True) or 0 (False) for each condition.*/
#include <stdio.h>
int main() {
    float Balance_1, Balance_2;
    printf("Enter first account balance: ");
    scanf("%f", &Balance_1);
    printf("Enter second account balance: ");
    scanf("%f", &Balance_2);
    
    // Comparison using relational operators only
    int isEqual = (Balance_1 == Balance_2);
    int isFirstGreater = (Balance_1 > Balance_2);
    int isSecondGreater = (Balance_2 > Balance_1);

    printf("\n------ Comparison Results ------\n");
    printf("Both balances are equal      : %d\n", isEqual);
    printf("First balance is greater     : %d\n", isFirstGreater);
    printf("Second balance is greater    : %d\n", isSecondGreater);
    return 0;
}
/*
OUTPUT
Enter first account balance: 67000
Enter second account balance: 78000

------ Comparison Results ------
Both balances are equal      : 0
First balance is greater     : 0
Second balance is greater    : 1
*/