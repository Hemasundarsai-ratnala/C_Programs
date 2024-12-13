#include <stdio.h>
#include<math.h>
void main(){
    int n,res=0,rem,temp,x;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    x= floor(log10(n)+1);
    while(n>0){
        rem=n%10;
        res=res+pow(rem,x);
        n=n/10;
    }
    if(temp==res){
    printf("\nArmstrong Number");
    }
    else{
        printf("\nNot a Armstrong Number");
    }
}