#include <stdio.h>
void main() {
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else if(n==0){
         print("Equal to zero");
    }
    else{
        printf("Negative number");
    }
}