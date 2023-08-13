#include <stdio.h>

int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l, sum1, sum2, chk;
	printf("Enter the first (single) digit: ");
	scanf("%d", &a);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&b,&c,&d,&e,&f);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&g,&h,&i,&j,&k);
	printf("Enter the last digit: ");
	scanf("%d", &l);
	
	sum1 = a + c + e + g + i + k;
	sum2 = b + d + f + h + j;
	chk = 9 - (sum1 * 3 + sum2 - 1) % 10;
	if(l == chk){
		printf("Valid");
	} else {
		printf("Invalid");
	}
	//chk = (10 - ((sum1 * 3 + sum2) % 10)) % 10;
}
