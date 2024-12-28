#include <stdio.h>
#include<math.h>
void main(){
    int n,sum=0,rem,temp,x;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    x= floor(log10(n)+1);
    if(x>5){
        printf("Input exceeds 5 digits");
    }
    else{
        while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum is %d",sum);
    }
}
