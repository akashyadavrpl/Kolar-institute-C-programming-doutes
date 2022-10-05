#include<stdio.h>
int main()
{
    // Take 2 inputs from the user and inc 40% on first value and 60% of 2nd val

    int val1, val2;
    int firstInc, secondInc, result;

    printf("Enter first number ");
    scanf("%d", &val1);

    firstInc = val1 * 40/100; // 0
    printf("%d\n", firstInc);

    printf("Enter Second number ");
    scanf("%d", &val2);

    secondInc = val2 * 60/100; //1
    printf("%d\n", secondInc);

    result = val1 + val2 + firstInc + secondInc; // 0 + 1

    printf("Sum is %d", result);

    return 0;
}
