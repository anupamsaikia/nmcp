#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
  return (x + y);
}

int main()
{
  int i = 0;
  float x0, y0, xn, h;
  printf("Enter the initial value of x and y :\n");
  scanf("%f%f", &x0, &y0);
  printf("Enter the step length :");
  scanf("%f", &h);
  printf("Enter the value of x for which y is required :");
  scanf("%f", &xn);

  while (x0 <= xn)
  {
    printf("\nWhen x(%d) = %f\tThen y(%f) = %f", i++, x0, x0, y0);
    y0 = y0 + h * f(x0, y0);
    x0 = x0 + h;
  }

  printf("\n\n");
  return 0;
}
