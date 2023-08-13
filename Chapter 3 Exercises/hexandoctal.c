#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter octal number: "); //example any number with 0 prefix - 056
	scanf("%i", &a);
	printf("Enter hex number: "); //example any number with 0x prefix - 0x56
	scanf("%i", &b);
	
	printf("%d - %i, %d - %i", a,a,b,b);
}
