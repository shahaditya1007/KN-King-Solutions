# include <stdio.h>
# define PI (22.0f/7.0f)
# define VOLUME_CONSTANT (4.0f/3.0f)

int main(void)
{
    int radius;
    float volume;
    

    printf("Enter the radius of sphere (meters): ");
    scanf("%d", &radius);
    
    int radius_cube = radius * radius * radius;
    
    volume = VOLUME_CONSTANT * PI * radius_cube;

    printf("The volume of the sphere is %.2f", volume);

    return 0;
}
