#include <stdio.h>
void main() {
    int a=0,b=1,c,n,i;
    printf("Enter value:");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",a,b);
    for(i=0;i<n-2;++i){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        }
}