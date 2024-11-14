# include <stdio.h>

int main(void)
{
  int height = 8, length = 12, width = 10;
  int volume = height * length * width;

  printf("Dimensions of the box: %dx%dx%d\n", height, length, width);
  printf("Volume of the box (Cubic Inches): %d\n", volume);
  printf("Weight of the box (Pounds): %d", (volume + 165) / 166);

  return 0;
}
