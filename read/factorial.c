#include <stdio.h>

// Program to calculate factorial using recursion
long factorial(int n) {
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int main() {
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (num < 0)
    printf("Factorial of negative number is not defined.\n");
  else
    printf("Factorial of %d is %ld\n", num, factorial(num));
  
  return 0;
}
