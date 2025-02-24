#include<stdio.h>
	int main(){
		int n, sum=0;
		printf("Enter the value of n : ");
		scanf("%d",&n);
		sum = (n*(n+1)*(2*n+1))/6;
		printf("The sum of squares is %d ", sum);
	return 0;
}