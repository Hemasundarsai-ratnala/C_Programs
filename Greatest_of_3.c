#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
          printf("%d is Greatest Number",a);  
        }
    }
    else if(b>c){
         printf("%d is Greatest Number",b);
    }
    else{
        printf("%d is Greatest Number",c);
    }
}