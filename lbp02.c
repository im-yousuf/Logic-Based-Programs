#include<stdio.h>
int main(){
	int f;
	float c;
	printf("Enter the temperture in degree Fahrenheit ");
	scanf("%d",&f);
	c = (f - 32) * 0.55;
	printf("The temperture in degree Celcius is %.2f",c);
	return 0;

}
