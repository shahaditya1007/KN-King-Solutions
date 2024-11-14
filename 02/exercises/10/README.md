# Exercise 2.10

ln the ```dweight.c``` program (Section 2.4). Which spaces are essential?

# Solution

The ```dweight.c``` program is given below: 

```c
# include <stdio.h>

int main(void)
{
    int height, length, width, volume;
    float weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %f\n", weight);

    return 0; 

}

```

The only spaces essential in this program are the space between ```#include``` and ```<stdio.h>```, the line break after the ```#include``` directive and the space between ```return``` and ```0``` in ```return 0;```
