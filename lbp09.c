#include<stdio.h>
#include<math.h>
int main(){
	float r,h;
	float vol;
	printf("r =");
	scanf("%f",&r);
	printf("h =");
	scanf("%f",&h);
	vol = 3.14 * r * r * h;
	printf("volume of cylinder = %f", vol);
	return 0;
}