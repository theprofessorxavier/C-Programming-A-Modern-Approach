#include <stdio.h>

int main(void){
	//division
	printf("%f\n", 1/2); //if both operands are integer the decimals are truncated (skipped)
	printf("%f\n", 1.0f/2); //if one operand or both operands are float numbers, the decimals are shown
	printf("%f\n", 1.0f/2.0f);
	//remainder
	printf("%d\n", 10%4); //both operands have to be an integer, if one operand isn't an integer it will cause an error (invalid operand)
	
	//both
//	printf("%f\n", 1/0); //both division and remainder would have an error if the right operand value is zero
//	printf("%d\n", 1%0);
	
	printf("%d %d", -9/7, -9%7);
}
