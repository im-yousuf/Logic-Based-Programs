#include<stdio.h>
#include<math.h>
int main(){
	int a;
	float area;
	printf("Enter the length of the side : ");
	scanf("%d",&a);
	area = (sqrt(3)/4) * a * a;
	printf("area is %f", area);
	return 0;
}