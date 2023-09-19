#include <stdio.h>

int main(void) {
  int l, h, n;

  printf("Hello! Welcome back!\n");
  printf("Today is a brick calculator!\n");
  printf("Ever wondered how many bricks are there in the wall next to you?\n");
  printf("You can use this to check that out!\n");
  printf("But before that, would you like to connect for further projects? Join me at https://www.linkedin.com/in/iamnaitik \n");
  printf("Now starting with the calculator\n");
  printf("May I know the dimensions of the wall in meters (length and height specifically)?\n");
  printf("Length: ");
  scanf("%d", &l);
  printf("Height: ");
  scanf("%d", &h);

  n = (l * h) / 0.002;

  printf("There might be %d bricks in the wall.\n", n);

  return 0;
}
