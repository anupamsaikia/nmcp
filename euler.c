#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
  return (x + y);
}

int main()
{
  float x, y, xn, h;
  printf("Enter the initial value of x and y :\n");
  scanf("%f%f", &x, &y);
  printf("Enter the value of x for which y is required : ");
  scanf("%f", &xn);
  printf("Enter the step length : ");
  scanf("%f", &h);

  while (x < xn)
  {
    y += h * f(x, y);
    x += h;
    printf("\nWhen x = %g\tThen y(%g) = %f", x, x, y);
  }

  printf("\n\n");
  return 0;
}
