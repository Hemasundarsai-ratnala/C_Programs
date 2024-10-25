#include <stdio.h>
void main() {
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}