#include<stdio.h>
int main(){
	int c;
	float f;
	printf("Enter the temperture in degree C ");
	scanf("%d",&c);
	f = ((1.8)*c)+32;
	printf("The temperture in degree F is %.2f",f);
}