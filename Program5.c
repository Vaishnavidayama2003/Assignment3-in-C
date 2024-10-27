
#include <stdio.h>
void main(){
	int units;
	printf("Enter number of units : ");
	scanf("%d",&units);

	if(units <= 100){
		printf("Cost = %d\n",5*units);
	}else if(units > 100 && units <= 300){
		printf("Cost = %d\n",5*100 + 7*(units - 100));
	}else{
		printf("Cost = %d\n",5*100 + 7*200 + 10*(units - 300));
	}
}
