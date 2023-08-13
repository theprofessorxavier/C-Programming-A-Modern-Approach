#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l, sum1, sum2, chk;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
	
	sum1 = a + c + e + g + i + k;
	sum2 = b + d + f + h + j;
	//chk = 9 - (sum1 * 3 + sum2 - 1) % 10;
	chk = (10 - ((sum1 * 3 + sum2) % 10)) % 10;
	
	printf("Check digit: %d", chk);
}
