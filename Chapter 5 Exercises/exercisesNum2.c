#include <stdio.h>

int main(void){
	int i = 10, j = 5, k;
	printf("%d\n", !i < j);
	i = 2; j =1;
	printf("%d\n", !!i + !j);
	i = 5; j = 0; k = -5;
	printf("%d\n", i && j || k);
	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k);
	
	return 0;
}
