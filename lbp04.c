
#include<stdio.h>
int main(){
	float r, pi = 3.14, volume;
	printf("Enter the radius of the sphere ");
		scanf("%f", &r);
	if(r>=0){
		volume = (1.33) * pi * r * r * r;
		printf("The area of the circle is %f", volume);
	}
	else{
		printf("The radius should be greater then 0 ");
	}
	return 0;
}
