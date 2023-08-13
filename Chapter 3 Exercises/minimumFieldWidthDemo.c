#include <stdio.h>

int main(void){
	int a = 123; float b = 1.123123123; 
	printf("%4d\n", a); //1 space from the right
	printf("%-4d\n", a); //1 space from the left
	printf("%.1e\n", b); //shows only one decimal
	printf("%.1f\n", b); //shows only one decimal
	printf("%.1g\n", b); //shows only 1 digit
}
