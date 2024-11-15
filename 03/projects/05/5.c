# include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    int sum_row1, sum_row2, sum_row3, sum_row4, sum_column1, sum_column2, sum_column3, sum_column4, sum_diagonal1, sum_diagonal2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("%d %d %d %d", num1, num2, num3, num4);
    printf("%d %d %d %d", num5, num6, num7, num8);
    printf("%d %d %d %d", num9, num10, num11, num12);
    printf("%d %d %d %d", num13, num14, num15, num16);

    sum_row1 = num1+num2+num3+num4;
    sum_row2 = num5+num6+num7+num8;
    sum_row3 = num9+num10+num11+num12;
    sum_row4 = num13+num14+num15+num16;

    sum_column1 = num1+num5+num9+num13;
    sum_column2 = num2+num6+num10+num14;
    sum_column3 = num3+num7+num11+num15;
    sum_column4 = num4+num8+num12+num16;

    sum_diagonal1 = num1+num6+num11+num16;
    sum_diagonal2 = num4+num7+num10+num13;

    printf("Row sums: %d %d %d %d", sum_row1, sum_row2, sum_row3, sum_row4);
    printf("Column sums: %d %d %d %d", sum_column1, sum_column2, sum_column3, sum_column4);
    printf("Diagonal sums: %d %d", sum_diagonal1, sum_diagonal2);

    return 0;


}
