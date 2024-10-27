
#include <stdio.h>
void main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	if(num >= 1 && num <= 1000)
		printf("%d is in the range\n",num);
	else
		printf("%d is not in the range\n",num);
}
