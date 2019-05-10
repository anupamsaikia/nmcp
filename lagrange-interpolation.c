#include <stdio.h>

int main()
{
  int i, j, n;
  float x[10], y[10], prod, sum = 0, ax;

  printf("Enter number of data : ");
  scanf("%d", &n);
  printf("Enter the independent variable values :\n");
  for (i = 0; i < n; i++)
    scanf("%f", &x[i]);
  printf("Enter the depentent variable values :\n");
  for (i = 0; i < n; i++)
    scanf("%f", &y[i]);
  printf("Enter the required value of the independent variable : ");
  scanf("%f", &ax);

  for (i = 0; i < n; i++)
  {
    prod = 1;
    for (j = 0; j < n; j++)
      if (i != j)
        prod = prod * (ax - x[j]) / (x[i] - x[j]);
    sum += prod * y[i];
  }

  printf("The required dependent variable value is : %f", sum);
  printf("\n\n");
  return 0;
}