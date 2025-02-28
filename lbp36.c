#include<stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>=1){
	n-=1;
		printf("%d",n);
	}
	else{
		printf("Enter a positive number");
	}
	return 0;
}