#include<stdio.h>
int main(){
int cup,free, total;
	printf("Enter the total number of cups");
	scanf("%d",&cup);
	if(cup>=1){
	free= cup / 6 ;
	total = cup + free;
	printf(" %d",total);
	}
	
}