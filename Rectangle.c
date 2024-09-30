#include <stdio.h>
void main() {
int l,b,Perimeter;
float Area;
printf("Enter sides of a rectangle:");
scanf("%d%d",&l,&b);
Perimeter=2*(l+b);
Area=(l*b);
printf("Perimeter and Area of a rectangle:%d"" and %f",Perimeter,Area);
}
