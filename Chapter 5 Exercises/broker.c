#include <stdio.h>

int main(void){
	float num, com;
	printf("Enter value of trade: ");
	scanf("%f", &num);
	if(num < 2500.0f){
		com = 30.0f + (num*(1.7/100));
	} else if(num < 6250.0f){
		com = 56.0f + (num*(0.66/100));
	} else if(num < 20000.0f){
		com = 76.0f + (num*(0.34/100));
	} else if(num < 50000.0f){
		com = 100.0f + (num*(0.22/100));
	} else if(num < 500000.0f){
		com = 155.0f + (num*(0.11/100));
	} else if(num >= 500000.0f){
		com = 255.0f + (num*(0.09/100));
	}
	
	if(com < 39.00f){
		com = 39.00f;
	}
	
	printf("Commision: $%.2f\n", com);
	
	return 0;
}
