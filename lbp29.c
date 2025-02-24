#include<stdio.h>
int ev_od(int x){
	if(x%2==0) return printf("Even");
	else return printf("Odd");
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>=0){
		ev_od(n);
	}
	else{
		printf("Enter a number greater than 0");
	}
}