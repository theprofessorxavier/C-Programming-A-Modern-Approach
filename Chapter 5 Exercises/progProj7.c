#include <stdio.h>

int main(void){
	int a,b,c,d,max,min,max1,max2,min1,min2;
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if(a > b){
		max1 = a;
		min1 = b;
	} else {
		max1 = b;
		min1 = a;
	}
	
	if(c > d){
		max2 = c;
		min2 = d;
	} else {
		max2 = d;
		min2 = c;
	}
	
	max = (max1 > max2)? max1: max2;
	min = (min1 < min2)? min1: min2;
	
	printf("Largest:\t%d\n", max);
	printf("Smallest:\t%d\n", min);
	
	return 0;
}
