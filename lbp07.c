#include<stdio.h>
#include<math.h>
int main(){
	int a,b,h,area;
	printf("a =");
	scanf("%d",&a);
	printf("b =");
	scanf("%d",&b);
	printf("h =");
	scanf("%d",&h);
	area = ((a + b)/2)*h;
	printf("area of trapezoid = %d", area);
	return 0;
}