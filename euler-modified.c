#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
  return x + y;
}

float predict(float x, float y, float h)
{
  return y + h * f(x, y);
}

float correct(float x, float y, float x1, float y1, float h, float e)
{
  float y1c = y1;
  int i = 0;

  do
  {
    y1 = y1c;
    y1c = y + 0.5 * h * (f(x, y) + f(x1, y1));
    printf("\n\tModified value %d of y = %f", ++i, y1c);
  } while (fabs(y1c - y1) > e);

  return y1c;
}

int main()
{
  int n;
  float x, y, xn, h, e;

  printf("Enter the initial value of x and y :\n");
  scanf("%f%f", &x, &y);
  printf("Enter the value of xn for which answer is required : ");
  scanf("%f", &xn);
  printf("Enter the number of intervals n : ");
  scanf("%d", &n);
  printf("Enter the error value e : ");
  scanf("%f", &e);

  h = (xn - x) / n;

  while (x < xn)
  {
    float x1 = x + h;
    float y1p = predict(x, y, h);
    printf("\nWhen x = %g\tThen predicted value y(%g) = %f", x1, x1, y1p);
    float y1c = correct(x, y, x1, y1p, h, e);
    x = x1;
    y = y1c;
  }

  printf("\n\nFinal value of y at x = %g is %f", x, y);
  printf("\n\n");
  return 0;
}
