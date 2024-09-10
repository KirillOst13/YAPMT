#include <stdio.h>
int main()
{
  float a, b, c, x;
  printf("ax + b = c\n");
  printf("Input a: ");
  scanf("%f", &a);
  printf("Input b: ");
  scanf("%f", &b);
  printf("Input c: ");
  scanf("%f", &c);
  printf("x = %.2f\n", (c-b)/a);
}