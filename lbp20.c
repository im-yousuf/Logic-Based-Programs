#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temperature : ");
	scanf("%d",&temp);
if(temp<0){
		printf("Freezing");
	}
else if(temp>=0 && temp<=20){
		printf("Cold");
	}
else if(temp>=21 && temp<=30){
		printf("Moderate");
	}
	else{
		printf("Hot");
	}
	return 0;
}