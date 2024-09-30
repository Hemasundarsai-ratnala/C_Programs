#include <stdio.h>
#include<math.h>
void main() {
int a,b,c;
float S,Area;
printf("Enter sides of a triangle:");
scanf("%d%d%d",&a,&b,&c);
S=(a+b+c)/2;
Area=sqrt(S*(S-a)*(S-b)*(S-c));
printf("Area of a triangle:%f",Area);
}
