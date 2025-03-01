#include<stdio.h>
#include<math.h>
int form(int x, int y){
		return pow(x-y,2);
	}
int main(){
	int a,b;
	printf("Enter the values of a and b : ");
	scanf("%d  %d",&a,&b);
	printf("(%d-%d)^2 is : %d",a,b,form(a,b));
	return 0;
}