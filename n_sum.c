#include <stdio.h>
void main() {
    int n,i,sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=0;i<=n;++i){
        sum=sum+i;
    }
    printf("Sum is %d",sum);
}
