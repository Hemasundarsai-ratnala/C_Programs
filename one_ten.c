#include <stdio.h>
void main() {
    int n,i=0;
    printf("Enter value:");
    scanf("%d",&n);
    while(i<=n){
        i++;
        printf("%d ",i);
    }
    printf("\n");
    while(i>=1){
        i--;
        
        printf("%d ",i);
    }
}