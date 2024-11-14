# include <stdio.h>

int main(void)
{
    int amount, balance;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount/20);

    amount = amount - 20 * (amount / 20);

    printf("$10 bills: %d\n", amount/10);

    amount = amount - 10 * (amount / 10);

    printf(" $5 bills: %d\n", amount / 5);

    balance = balance - 5 * (amount / 5);

    printf(" $1 bills: %d\n", amount / 1);

    balance = balance - 1 * (amount / 1);

    return 0;
}
