#include <stdio.h>

int main(void){
	int hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minute);
	if(hour >= 12 && hour <= 23){
		if(hour == 12){
			printf("Equivalent 12-hour time: %.1d:%.2d PM", hour, minute);
		} else {
			printf("Equivalent 12-hour time: %.1d:%.2d PM", hour - 12, minute);
		}
	} else if(hour < 12 && hour >= 0){
		hour = (hour == 0)?hour+1:hour;
		printf("Equivalent 12-hour time: %.1d:%.2d AM", hour, minute);
	} else {
		printf("Invalid");
	}
	
	return 0;
}
