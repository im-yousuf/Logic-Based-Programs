#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("adj =");
	scanf("%d",&a);
	printf("adj =");
	scanf("%d",&b);
	c = sqrt(a*a + b*b);
	printf("hyp = %d", c);
	return 0;
}