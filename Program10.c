
#include <stdio.h>
void main(){
	float accountBalance = 10000.00f; 
	float withdrawalAmount;

	printf("Enter amount to withdraw : ");
	scanf("%f",&withdrawalAmount);
	
	if(withdrawalAmount > 0){
		if(withdrawalAmount <= accountBalance){
			if(withdrawalAmount <= 5000){
				accountBalance -= withdrawalAmount;
				printf("Withdrawal Successful! your new balance is %f\n",accountBalance);
			}else{
				printf("Withdrawal limit exceeded...you can only withdraw upto 5000 Rs.\n");
			}
		}else{
			printf("Insufficient balance\n");
		}
	}else{
		printf("Invalid balance...please enter a positive amount\n");
	}

}
