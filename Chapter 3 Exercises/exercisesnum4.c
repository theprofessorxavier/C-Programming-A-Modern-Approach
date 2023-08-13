#include <stdio.h>

int main(void){
	int i,j;
	float x;
	
	printf("values: ");
	scanf("%d%f%d", &i, &x, &j); //input 10.3 5 6
	printf("i=%d\nj=%d\nx=%f", i,j,x); //output i=10 j=5 x=.3;
	
	return 0;
}
