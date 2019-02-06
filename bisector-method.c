#include <stdio.h>
#include <math.h>

float fun(float x)
{
  return (x * x * x) - (4 * x) + 1;
}

int main()
{
  float x, x1, x2, f, f1, f2, e = 0.0001;
  printf("Enter the guess values : \n");
  scanf("%f%f", &x1, &x2);

  x = (x1 + x2) / 2;
  f1 = fun(x1);
  f2 = fun(x2);
  f = fun(x);

  while (fabs(x2 - x1) > e)
  {
    if (f * f1 < 0)
      x2 = x;
    else
      x1 = x;

    x = (x1 + x2) / 2;
    f1 = fun(x1);
    f2 = fun(x2);
    f = fun(x);
  }

  printf("The required solution is %f", x);

  return 0;
}
