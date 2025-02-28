#include<stdio.h>
int main(){
	int n;
	printf("Enter an integer : ");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d",n/2);
	}
	else{
		printf("Enter an even number");
	}
}