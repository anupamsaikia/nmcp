// Fit a straight line y = a + bx
#include <stdio.h>

int main()
{
  int i, n;
  float x[10], y[10], a, b, sumx, sumy, sumxy, sumxx;
  sumx = sumy = sumxy = sumxx = 0;

  printf("Enter number of data : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter x%d : ", i);
    scanf("%f", &x[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("Enter y%d : ", i);
    scanf("%f", &y[i]);
  }

  for (i = 0; i < n; i++)
  {
    sumx += x[i];
    sumy += y[i];
    sumxy += x[i] * y[i];
    sumxx += x[i] * x[i];
  }

  a = (sumx * sumxy - sumy * sumxx) / (sumx * sumx - n * sumxx);
  b = (sumx * sumy - n * sumxy) / (sumx * sumx - n * sumxx);

  printf("\nThe required values are :");
  printf("\na : %g\tb : %g", a, b);
  printf("\nSo the equation is : y = %g + %gx", a, b);
  printf("\n\n");
  return 0;
}
