#include<stdio.h>
int main(){
	int n,d,x,count;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter number to search: ");
	scanf("%d",&d);
 while(n>0){
 	x= n%10;
 	if(x==d){
 		count++;
		}
		n=n/10;
	}
	printf("count = %d",count);
}