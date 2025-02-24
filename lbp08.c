#include<stdio.h>
#include<math.h>
int main(){
	int l,b,perimeter;
	printf("L =");
	scanf("%d",&l);
	printf("B =");
	scanf("%d",&b);
	perimeter = 2*(l+b);
	printf("Perimeter of rectangle is = %d", perimeter);
	return 0;
}