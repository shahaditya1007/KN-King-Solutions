# include <stdio.h>

int main(void)
{
    int x, answer;

    printf("Enter x: ");
    scanf("%d", &x);

    answer = ((((3*x + 2)* x - 5)* x - 1)* x + 7)* x - 6;

    printf("The answer to the polynomial is: %d", answer);

    return 0;

}
