#include <stdio.h>

int main(void){
	int a, b, c, d;
	printf("Enter a three-digit number: ");
	scanf("%d", &a);
	b = a/100;
	c = a/10%10*10;
	d = a - a/100*100;
	d = d%10*100;
	printf("The reversal is: %d", d+c+b);
	
	return 0;
}
