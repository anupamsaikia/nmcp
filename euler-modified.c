#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
  return (x + y);
}

int main()
{
  int i = 0, n;
  float x0, y0, x1, y11, y12, y13, h, xn, e;

  printf("Enter the initial value of x0 and y0 :\n");
  scanf("%f%f", &x0, &y0);
  printf("Enter the value of xn for which ans is required : ");
  scanf("%f", &xn);
  printf("Enter the number of intervals n : ");
  scanf("%d", &n);
  printf("Enter the error value e : ");
  scanf("%f", &e);

  h = (xn - x0) / n;

  while (x0 <= xn)
  {
    printf("\nWhen x(%d) = %f\tThen y(%f) = %f", i++, x0, x0, y0);
    y11 = y0 + h * f(x0, y0);
    x1 = x0 + h;
    y12 = y0 + (h / 2) * (f(x0, y0) + f(x1, y11));

    while (fabs(y11 - y12) > e)
    {
      y13 = y0 + (h / 2) * (f(x0, y0) + f(x1, y12));
      printf("\n\tModified value of y = %f", y13);
      y11 = y12;
      y12 = y13;
    }

    x0 = x1;
    y0 = y11;
  }

  printf("\n\n");
  return 0;
}
