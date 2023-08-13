#include <stdio.h>

int main(void){
	int x, poly;
	printf("x: ");
	scanf("%d", &x);
	poly = ((((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6);
	printf("%d", poly);
}
