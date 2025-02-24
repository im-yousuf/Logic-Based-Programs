#include<stdio.h>
int main(){
	float total_marks, obtained_marks;
	float percentage;
	printf("Enter The Total Marks ");
	scanf("%f", &total_marks);
	printf("Enter The obtained Marks ");
	scanf("%f", &obtained_marks);
	if(obtained_marks <= total_marks){
		percentage = (obtained_marks/total_marks)*100;
		printf("percentage is %f ",percentage);
	}
	else{
		printf("INVALID MARKS OBTAINED");
	}
}