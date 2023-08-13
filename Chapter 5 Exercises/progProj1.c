#include <stdio.h>

int main(void){
	int num, ans;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num >= 0 && num <= 9){
		ans = 1;
	}else if(num >= 10 && num <= 99){
		ans = 2;
	}else if(num >= 100 && num <= 999){
		ans = 3;
	}else if(num >= 1000){
		printf("The number %d has more than 3 digits", num);
		return 0;
	}
	printf("The number %d has %d ", num, ans);
	ans == 1 ? printf("digit"): printf("digits");
	
	return 0;
}
