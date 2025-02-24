#include<stdio.h>
int main(){
	float r, pi = 3.14, area;
	printf("Enter the radius of the circle ");
	scanf("%f", &r);
	if(r>0){
		area = pi * r * r;
		("The area of the circle is %.2f", area);
	}
	else{
	printf("The radius shoulsd be greater then 0 ");
	}
	return 0;
}