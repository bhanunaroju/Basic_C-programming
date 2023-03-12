#include <stdio.h>
int main() {
  int n, rev = 0, rmndr,N;
    printf("Enter a Number: ");
    scanf("%d", &n);
    N=n;
    while (n != 0) {
        rmndr = n % 10;
        rev = rev * 10 + rmndr;
        n /= 10;
    }
    if (N== rev)
        printf("%d is a palindrome.",N);
    else
        printf("%d is not a palindrome.",N);

    return 0;
}