#include <stdio.h>
int fact(int);
int main() {
    int a,b;
    printf("Enter the Number whose factorial is to be found:\n");
    scanf("%d",&a);
    b=fact(a);
    printf("Factorial of %d is %d",a,b);
    return 0;
}
int fact(int n) {
    if (n==1)
 return 1;
 else
 return n*fact(n-1);
}
