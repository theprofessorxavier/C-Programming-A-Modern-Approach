#include <stdio.h>

int main(void){
	int dollar, twenty, ten, five, one;
	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);
	twenty = dollar / 20;
	dollar = dollar - (twenty * 20);
	ten = dollar / 10;
	dollar = dollar - (ten * 10);
	five = dollar / 5;
	dollar = dollar - (five * 5);
	one = dollar / 1;
	dollar = dollar - (one * 1); 
	
	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d",
	twenty, ten, five, one);
}
