#include<stdio.h>
void fibo(int x){
	int a = 0;
	int b = 1;
	for(int i=0;i<x;i++){
		printf("%d ",a);
		int next = a + b;
		a = b;
		b = next;
	}	
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(1<=n && n<=50){
		fibo(n);
	}
	else{
		printf("Enter a number in between 1 and 50");
	}
}