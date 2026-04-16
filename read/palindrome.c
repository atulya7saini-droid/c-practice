#include <stdio.h>
#include <string.h>

// Program to check if a string is palindrome
int main() {
  char str[100];
  int left = 0, right, isPalin = 1;
  
  printf("Enter a string: ");
  scanf("%s", str);
  
  right = strlen(str) - 1;
  
  while (left < right) {
    if (str[left] != str[right]) {
      isPalin = 0;
      break;
    }
    left++;
    right--;
  }
  
  if (isPalin)
    printf("\"%s\" is a palindrome.\n", str);
  else
    printf("\"%s\" is not a palindrome.\n", str);
  
  return 0;
}
