#include <stdio.h>

int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l,m;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	m = 9-((((b+d+f+h+j+l)*3+(a+c+e+g+i+k))-1)%10);
	printf("Check digit: %d", m);
	
	return 0;
}
