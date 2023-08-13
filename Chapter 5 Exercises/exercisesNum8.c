#include <stdio.h>
#define true 1
#define false 0

int main(void){
	int age = 10, teenager = 0;
	teenager = age <= 19 && age >= 13;
	
	printf("%d", teenager);
	return 0;
}
