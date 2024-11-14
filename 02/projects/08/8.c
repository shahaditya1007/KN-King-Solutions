# include <stdio.h>

int main(void)
{
    float amount, rate, payment;
    float balance;
    float monthly_interest;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_interest = (rate / 100) / 12.0f;

    balance = (amount - payment) + (amount * monthly_interest);

    printf("Balance after first payment: $%.2f\n", balance);

    balance = (balance - payment) + (balance * monthly_interest);

    printf("Balance after second payment: $%.2f\n", balance);

    balance = (balance - payment) + (balance * monthly_interest);

    printf("Balance after third payment: $%.2f\n", balance);

    return 0;
}
