#include<stdio.h>
int doub(int x){
		return x*2;
	}
int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	if(n>=0)
	printf("2 times of %d is %d",n,doub(n));
	else
	printf("Enter a positive value");
	return 0;
}