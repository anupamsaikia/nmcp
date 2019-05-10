#include <stdio.h>

float f(float x, float y)
{
  return (x + y);
}

int main()
{
  int n;
  float x0, y0, x1, y11, y12, xn, h;
  printf("Enter the initial value of x0 and y0 :\n");
  scanf("%f%f", &x0, &y0);
  printf("Enter the value of x for which y is required : ");
  scanf("%f", &xn);
  printf("Enter the number of intervals n : ");
  scanf("%d", &n);

  h = (xn - x0) / n;

  while (x0 < xn)
  {
    x1 = x0 + h;
    y11 = y0 + h * f(x0, y0);
    y12 = y0 + (h / 2) * (f(x0, y0) + f(x1, y11));
    printf("\nWhen x = %g\tThen y(%g) = %f", x1, x1, y12);
    x0 = x1;
    y0 = y12;
  }

  printf("\n\n");
  return 0;
}
