#include <stdio.h>

int main(void){
	float value, price, com, com2;
	int shares;
	printf("Enter number of shares:\t");
	scanf("%d", &shares);
	printf("Enter price per share:\t");
	scanf("%f", &price);
	
	value = price * shares;
	
	if(value < 2500.0f){
		com = 30.0f + (value*(1.7f/100));
	} else if(value < 6250.0f){
		com = 56.0f + (value*(0.66f/100));
	} else if(value < 20000.0f){
		com = 76.0f + (value*(0.34f/100));
	} else if(value < 50000.0f){
		com = 100.0f + (value*(0.22f/100));
	} else if(value < 500000.0f){
		com = 155.0f + (value*(0.11f/100));
	} else if(value >= 500000.0f){
		com = 255.0f + (value*(0.09f/100));
	}
	
	if(com < 39.00f){
		com = 39.00f;
	}
	
	if(shares < 2000){
		com2 = 33.00f + shares * 0.03f;
	} else if (shares >= 2000){
		com2 = 33.00f + shares * 0.02f;
	}
	
	printf("Original Commision:\t$%.2f\n", com);
	printf("Rival Commision:\t$%.2f\n", com2);
	
	return 0;
}
