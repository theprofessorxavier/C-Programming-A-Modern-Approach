#include <stdio.h>

int main(void){
	int num;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);
	printf("In octal, your number is: %.5d", 
	num%8 + num/8%8*10 + num/8/8%8*100 + num/8/8/8%8*1000 + 
	num/8/8/8/8%8*10000);
	
	return 0;
}
