#include <stdio.h>

int main(){
	int x, poly;
	printf("X: ");
	scanf("%d", &x);
	poly = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
	printf("%d", poly);
	
}
