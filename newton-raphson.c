#include <stdio.h>
#include <math.h>

float f(float x)
{
  return (x * x * x - 3 * x + 1.06);
}

float fd(float x)
{
  return (3 * x * x - 3);
}

int main()
{
  float x1, x2, e = 0.00001;
  printf("Enter the guess value : ");
  scanf("%f", &x1);

  x2 = x1 - (f(x1) / fd(x1));

  while (fabs(x2 - x1) > e)
  {
    x1 = x2;
    x2 = x1 - (f(x1) / fd(x1));
  }
  
  printf("The required solution is %f", x2);
  printf("\n\n");
  return 0;
}
