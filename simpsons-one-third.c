#include <stdio.h>

float f(float x)
{
  return 1 / x;
}

int main()
{
  float x0, xn, h, ans, sum_odd = 0, sum_even = 0;
  int i, n;
  printf("Enter the lower and upper limit :\n");
  scanf("%f%f", &x0, &xn);
  printf("Enter the number of intervals : ");
  scanf("%d", &n);

  h = (xn - x0) / n;

  for (i = 1; i <= (n - 1); i++)
    if (i % 2 == 0)
      sum_even = sum_even + f(x0 + i * h);
    else
      sum_odd = sum_odd + f(x0 + i * h);

  ans = (h / 3) * (f(x0) + f(xn) + 2 * sum_even + 4 * sum_odd);
  printf("Required integration is : %f", ans);
  printf("\n\n");
  return 0;
}
