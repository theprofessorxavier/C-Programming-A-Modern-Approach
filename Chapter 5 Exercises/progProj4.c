#include <stdio.h>

int main(void){
	float wind;
	printf("Enter wind speed (in knots):\t");
	scanf("%f", &wind);
	if(wind < 1){
		printf("Calm");
	} else if (wind < 4){
		printf("Light Air");
	} else if (wind < 28){
		printf("Breeze");
	} else if (wind < 48){
		printf("Gale");
	} else if (wind < 64){
		printf("Storm");
	} else {
		printf("Hurricane");
	}
	
	return 0;
}
