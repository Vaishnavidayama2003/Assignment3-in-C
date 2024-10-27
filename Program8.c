
#include <stdio.h>
void main(){
	int percent;
	printf("Enter precent : ");
	scanf("%d",&percent);

	if(percent >= 75)
		printf("First class with distinction\n");
	else if(percent >= 60 && percent < 75)
		printf("First class\n");
	else if(percent >= 50 && percent < 60)
		printf("Second class\n");
	else if(percent >= 35 && percent < 50)
		printf("Pass\n");
	else
		printf("Fail\n");
}
