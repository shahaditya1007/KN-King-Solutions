# include <stdio.h>

int main(void)
{
    int gsi, identifier, code, number, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &identifier, &code, &number, &digit);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", digit);

    return 0;
}
