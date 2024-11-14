# include <stdio.h>
# define PI (22.0f/7.0f)
# define VOLUME_CONSTANT (4.0f/3.0f)

int main(void)
{
    int radius = 10;
    int radius_cube = radius * radius * radius;
    float volume = VOLUME_CONSTANT * PI * radius_cube;

    printf("Volume of the sphere (cube units): %.2f", volume);
    return 0;   
}
