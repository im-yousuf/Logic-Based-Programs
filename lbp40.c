#include<stdio.h>
int prime(int x){ 
	if(x==1){
		printf("Not Prime Not Composite");
	}
	if(x==2){
		printf("Yes");
	}
	for(int i=2;i<x;i++){
		if(x%i==0) return printf("No");
		else return printf("Yes");
	}
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>0)
	prime(n);
	else
	printf("Enter a postive number : ");
}
