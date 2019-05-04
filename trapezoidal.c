#include <stdio.h>

float f(float x)
{
  return 1 / (1 + x * x);
}

int main()
{
  float x0, xn, h, sum = 0, ans;
  int i, n;
  printf("\nEnter the lower and upper limit :\n");
  scanf("%f%f", &x0, &xn);
  printf("\nEnter the number of intervals : ");
  scanf("%d", &n);

  h = (xn - x0) / n;

  for (i = 1; i <= (n - 1); i++)
    sum = sum + f(x0 + i * h);

  ans = (h / 2) * (f(x0) + f(xn) + 2 * sum);

  printf("Required integration is : %f", ans);
  printf("\n\n");
  return 0;
}
