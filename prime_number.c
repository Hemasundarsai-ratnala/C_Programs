#include <stdio.h>
void main() {
    int n,i,count=0;
    printf("Enter value:");
    scanf("%d",&n);
    if(n==1){
        count=2;
    }
    for(i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            printf("Not a Prime Number");
        }
        else{
            printf("Prime Number");
        }
    
    
}