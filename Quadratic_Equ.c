#include <stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float r1,r2;
    printf("Enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("Roots are Real & Distinct");
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("Roots are %f & %f",&r1,&r2);
    }
    else if(d<0){
        printf("Roots are Real & Imaginary");       
    }
    else{
        printf("Roots are Real & Equal");
        r1=r2=-b/(2*a);
        printf("Roots are %f & %f",&r1,&r2);
    }
}