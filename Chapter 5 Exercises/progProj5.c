#include <stdio.h>

int main(void){
	float income, tax;
	printf("Enter taxable income:\t");
	scanf("%f", &income);
	
	if(income < 750.0f){
		tax = income * 0.01;
	} else if(income < 2250.0f){
		tax = (income-750.0f) * 0.02 + 7.50f;
	} else if(income < 3750.0f){
		tax = (income-2250.0f) * 0.03 + 37.50f;
	} else if(income < 5250.0f){
		tax = (income-3750.0f) * 0.04 + 82.50f;
	} else if(income < 7000.0f){
		tax = (income-5250.0f) * 0.05 + 142.50f;
	} else {
		tax = (income-7000.0f)* 0.06 + 230.50f;
	}
	
	printf("Tax due:\t\t$%.2f", tax);
	return 0;
}
