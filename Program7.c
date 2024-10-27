
#include <stdio.h>
void main(){
	int costPrice;
	int sellingPrice;

	printf("Enter cost price : ");
	scanf("%d",&costPrice);
	
	printf("Enter selling price : ");
	scanf("%d",&sellingPrice);

	if(costPrice == sellingPrice)
		printf("No profit no loss\n");
	else if(sellingPrice > costPrice)
		printf("Profit : %d\n",sellingPrice - costPrice);
	else
		printf("Loss : %d\n",costPrice - sellingPrice);
}
