#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
  return (x + y);
}

int main()
{
  int i = 0;
  float x, y, xn, h;
  printf("Enter the initial value of x and y :\n");
  scanf("%f%f", &x, &y);
  printf("Enter the step length :");
  scanf("%f", &h);
  printf("Enter the value of x for which y is required :");
  scanf("%f", &xn);

  while (x <= xn)
  {
    y += h * f(x, y);
    x += h;
    printf("\nWhen x%d = %f\tThen y(%f) = %f", ++i, x, x, y);
  }

  printf("\n\n");
  return 0;
}
