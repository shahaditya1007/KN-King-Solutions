# include <stdio.h>
# define TAX_RATE (5.0f/100.0f)

int main(void)
{
    float amount, amount_after_tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount_after_tax = amount + (amount * TAX_RATE);

    printf("With tax added: $%.2f", amount_after_tax);

    return 0; 
}
