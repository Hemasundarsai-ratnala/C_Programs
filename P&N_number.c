#include <stdio.h>
void main() {
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else{
        printf("Negative number");
    }
}