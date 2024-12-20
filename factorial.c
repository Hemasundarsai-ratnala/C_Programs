#include <stdio.h>
void main() {
    int n,i;
    long int fact=1;
    printf("Enter value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %ld",n,fact);
    
    
}