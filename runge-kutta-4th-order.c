#include<stdio.h>
#include<math.h>

float f(float x, float y){
  return x + y;
}

int main(){
  float x0, y0, y1, xn, h, k1, k2, k3, k4;
  printf("Enter initial value of x and y :\n");
  scanf("%f%f", &x0, &y0);
  printf("Enter the step length : ");
  scanf("%f", &h);
  printf("Enter the value of xn for which y is required : ");
  scanf("%f", &xn);

  while(x0<=xn){
    printf("\nWhen x = %f\tThen y(%f) = %f", x0, x0, y0);

    k1 = h * f(x0, y0);
    k2 = h * f (x0 + (h/2), y0 + (k1/2));
    k3 = h * f (x0 + (h/2), y0 + (k2/2));
    k4 = h * f (x0 + h, y0 + k3);

    y1 = y0 + (1.0/6.0) * (k1 + 2*k2 + 2*k3 + k4);
    y0 = y1;
    x0 = x0 + h;
  }

  printf("\n\n");
  return 0;
}
