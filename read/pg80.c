#include <limits.h>
#include <math.h>
#include <stdio.h>
// #include <stdlib.h>
int main(void) {
  float a, r1, r2, x, b, r, y, z;
  int i;
  printf("minimum value of int = %d", INT_MIN);
  printf("\nmaximum value of int = %d", INT_MAX);
  printf("\nmaximum value of unsigned int = %u", UINT_MAX);
  printf("\nminimum value of long int = %ld", LONG_MIN);
  printf("\nmaximum value of long int = %ld", LONG_MAX);
  i = 2147483647;
  i = i + 1;
  printf("\nmaximum int value +1 = %d", i); // 6.1

  char ch;
  for (ch = 0; ch <= 127; ch++);
  printf("\n%d%c", ch, ch); // 7.2

  a = 1;
  b = 2;
  x = 3;
  y = a - (a / a - x) + b;
  printf("\n%f", y); // 8.3

  a = 3;
  y = 1 + (1 / (a + 1 / a)) + b;
  printf("\n%f", y); // 9.4

  y = 6.00f;
  z = ((1 - x) / (1 + x)) / ((1.00 + y) / (1.00 - y));
  printf("\n%f", z); // 10.5

  r1 = 2;
  r2 = 3;
  r = 1 / (1 / r1 + 1 / r2);
  printf("\n%f", r); // 11.6

  y = sqrt(sin(2 * x) + cos(2 * x));
  printf("\n%f", y);

  x = pow(a + b, 3) - 3 * a * b * (a + b);
  printf("\n%f\n", x);

  x=exp(x) + pow(x, exp(1));
  printf("\n%f",x);

  y = fabs(-1 * x); // abs for int, fabs for float
  printf("\n%f\n", y);

  printf("%f", sin(90));
}
