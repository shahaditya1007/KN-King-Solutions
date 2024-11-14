# include <stdio.h>

int main(void)
{
    int x, answer;

    printf("Enter x: ");
    scanf("%d", &x);

    answer = 3 * x*x*x*x*x + 2 * x*x*x*x - 5 * x*x*x - x*x + 7 * x - 6;

    printf("The answer to the polynomial is: %d", answer);

    return 0;

}
