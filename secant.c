#include <stdio.h>
#include <math.h>

float f(float x)
{
  return (exp(-x) - x);
}

int main()
{
  float x1, x2, x3, e = 0.00001;
  printf("Enter the guess values :\n");
  scanf("%f%f", &x1, &x2);

  x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

  while (fabs(x3 - x2) > e)
  {
    x1 = x2;
    x2 = x3;
    x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
  }

  printf("The required solution is %f", x3);
  printf("\n\n");
  return 0;
}
