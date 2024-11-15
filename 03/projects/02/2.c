# include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\t\t\tPurchase\n");
    printf("\tPrice\t\t\tDate\n");
    printf("%d\t$%8.2f\t\t%d/%d/%d\n", item, price, month, day, year);

    return 0;

}
