
#include <stdio.h>
void main(){
	int percentage;
	printf("Enter percentage : ");
	scanf("%d",&percentage);
	
	if(percentage > 85)
		printf("Medical\n");
	else if(percentage <= 85 && percentage > 75)
		printf("Engineering\n");
	else if(percentage <= 75 && percentage >= 65)
		printf("Pharmacy or Bachelor in Science\n");
	else
		printf("Commerce\n");
}
