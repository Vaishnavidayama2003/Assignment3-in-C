
#include <stdio.h>
void main(){
	int num1;
	int num2;

	printf("Enter number : ");
	scanf("%d",&num1);
	printf("Enter number : ");
	scanf("%d",&num2);

	if(num1 > num2)
		printf("%d is maximum\n",num1);
	else
		printf("%d is maximum\n",num2);
	
}
