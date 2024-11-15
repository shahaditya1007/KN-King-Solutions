# Exercise 3.6

Sbow how to modify tbe addfrac.c program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each / character.

# Solution

Here is the `addfrac.c` program : 

```c
# include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2;
    int result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The addition of the two fractions is: %d/%d", result_num, result_denom);

    return 0;   
}
```

For the modified program, see `6.c`
