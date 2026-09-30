#include <stdio.h>

int countDigit(int n, int digit)
{
    if (n == 0)
        return 0;

    return (n % 10 == digit) + countDigit(n / 10, digit);
}

int main()
{
    int n, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    printf("Count = %d", countDigit(n, digit));

    return 0;
}
