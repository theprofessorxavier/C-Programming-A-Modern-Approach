#include <stdio.h>

int main(void){
	int a, b, c;
	printf("Enter a two-digit number: ");
	scanf("%d", &a);
	b = a/10;
	c = a%10*10;
	printf("The reversal is: %d", b+c);
	
	return 0;
}
