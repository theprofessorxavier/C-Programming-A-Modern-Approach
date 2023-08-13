#include <stdio.h>

int main(void){
	float amount, interestRate, monthly, monthlyRate;
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly);
	
	interestRate = (interestRate/100) / 12;
	amount  = amount - monthly;
	printf("Balance remaining after first payment: $%.2f\n", amount);
	monthlyRate = monthly + (monthly * interestRate);
	amount  = amount - monthlyRate;
	printf("Balance remaining after second payment: $%.2f\n", amount);
	monthlyRate = monthly + (monthly * interestRate) + (monthly * interestRate);
	amount  = amount - monthlyRate;
	printf("Balance remaining after third payment: $%.2f\n", amount);
	
	return 0;
}
