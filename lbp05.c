#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int root1,root2;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of c \n");
	scanf("%d",&c);
	root1 = (-b + sqrt((b*b) - (4*a*c) ))/2*a;
	root2 = (-b - sqrt((b*b) - (4*a*c) ))/2*a;
	printf("ROOT 1 value = %d\n",root1);
	printf("ROOT 2 value = %d",root2);
	return 0;
}