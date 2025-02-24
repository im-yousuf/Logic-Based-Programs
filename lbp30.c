#include<stdio.h>
int ev_od(int x){
	if(x%2!=0 || (x%2==0 && x>=6 && x<=20))return printf("Wierd");
	if(x%2==0 && x>=2 && x<=5 || x>=20) return printf("Not Wierd");
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>=1 && n<=100){
		ev_od(n);
	}
	else{
		printf("Enter a number greater than 0");
	}
}