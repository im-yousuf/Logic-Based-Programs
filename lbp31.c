#include<stdio.h>
#include<math.h>
int main(){
	float base,pow1,pow2;
	printf("Enter Base Integer : ");
	scanf("%f",&base);
	printf("\n");
	printf("Enter power1 and power2 : ");
	scanf("%f  %f",&pow1,&pow2);
	printf("\n");
	printf("%.2f",pow(base,pow1*pow2));
	return 0;
}