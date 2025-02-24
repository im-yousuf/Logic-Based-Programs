#include<stdio.h>
int main(){
	float m,v,KE;
	printf("mass = ");
	scanf("%f",&m);
	printf("velocity = ");
	scanf("%f",&v);
	KE = ((0.5) * m * v * v) ;
	printf("Kinetic Energy = %f ", KE);
return 0;	
}