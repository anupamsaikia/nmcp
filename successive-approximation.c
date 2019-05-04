#include <stdio.h>
#include <math.h>

float g(float x)
{
  return ((exp(-x) + 1) / 2);
}

int main()
{
  float x1, x2, e = 0.00001;
  printf("Enter the guess value : ");
  scanf("%f", &x1);

  x2 = g(x1);

  while (fabs(x2 - x1) > e)
  {
    x1 = x2;
    x2 = g(x1);
  }

  printf("The required solution is %f", x2);
  printf("\n\n");
  return 0;
}
