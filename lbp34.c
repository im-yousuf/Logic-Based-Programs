#include<stdio.h>
int main(){
	int scount;
	printf("Enter Sales Count from 30 to 100 : ");
	scanf("%d",&scount);
	if(scount>=30 && scount<=100){
		if(scount>=30 && scount<=50)
			printf("D");
		
		else if(scount>=51 && scount<=60)
			printf("C");
		
		else if(scount>=61 && scount<=80)
			printf("B");
			
		else printf("A");
	}
	else{
		
			printf("Enter A Number Between 30 to 100");
	}
	
}