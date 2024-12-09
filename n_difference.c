#include <stdio.h>
#include<stdlib.h>
void main() {
    int n,i,sum1=0,sum2=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=0;i<=n;++i){
        if(i%2==0){
        sum2=sum2+i;
        }
        else{
            sum1=sum1+i;
        }
    }
    
    printf("Difference is %d",abs(sum1-sum2));
}