#include<stdio.h>
#include<math.h>
int form(int x, int y){
		return pow(x,y);
	}
int main(){
	int a,m;
	printf("Enter the values of base and power : ");
	scanf("%d  %d",&a,&m);
	printf("(%d)^%d is : %d",a,m,form(a,m));
	return 0;
}