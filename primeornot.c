#include <stdio.h>

int main() {

  int n, i, num = 0;
  printf("Enter a Number:- ");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; ++i) {    
    if (n % i == 0 || n == 0 || n == 1) {
      num = 1;
    }
  }
  if (num == 0){
    printf("%d is a prime number.", n);
  }else{
    printf("%d is not a prime number.", n);
  }
  return 0;
}