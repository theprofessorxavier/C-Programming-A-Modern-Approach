#include <stdio.h>

int power(int num, int exp){
	int ans = 1;
	for(int i = 0; i < exp; i++){
		ans *= num;
	}
	return ans;
}

int main(void){
	int value, exp;
	printf("Enter value: ");
	scanf("%d", &value);
	printf("Enter exponent: ");
	scanf("%d", &exp);
	printf("Answer: %d", power(value,exp));
	
	return 0;
}

