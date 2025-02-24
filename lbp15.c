#include<stdio.h>
int main(){
	int r,h;
	float vol;
 		printf("r =");
		scanf("%d",&r);
		printf("h =");
		scanf("%d",&h);
		vol = 1/3*(3.14 * r * r * h);
		printf("volume of cone = %f", vol);
	return 0;
}