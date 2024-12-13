#include <stdio.h>
#include<math.h>
void main(){
    int n,res=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
        res=res+pow(i,3);
    }
    }
    printf("Sum of cubes of even numbers is %d",res);
}
    
