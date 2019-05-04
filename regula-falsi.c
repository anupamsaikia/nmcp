#include <stdio.h>
#include <math.h>

float fun(float x)
{
  return (x * x * x) - (4 * x) + 1;
}

int main()
{
  float x, x1, x2, f, f1, f2, e = 0.00001;
  printf("Enter the guess values : \n");
  scanf("%f%f", &x1, &x2);

  f1 = fun(x1);
  f2 = fun(x2);
  x = (x1 * f2 - x2 * f1) / (f2 - f1);
  f = fun(x);

  while (fabs(f) > e)
  {
    if (f * f1 < 0)
      x2 = x;
    else
      x1 = x;

    f1 = fun(x1);
    f2 = fun(x2);
    x = (x1 * f2 - x2 * f1) / (f2 - f1);
    f = fun(x);
  }

  printf("The required solution is %f", x);
  printf("\n\n");
  return 0;
}
