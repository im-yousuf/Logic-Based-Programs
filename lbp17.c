#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,s,area;
printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
s = (a+b+c)/2;
area = sqrt((s)*(s-a)*(s-b)*(s-c));
printf("AREA = %f",area);
return 0;
}