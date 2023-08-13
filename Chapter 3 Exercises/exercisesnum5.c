#include <stdio.h>

int main(void){
	float x,y; int i;
	printf("values: ");
	scanf("%f%d%f", &x,&i,&y); //input 12.3 45.6 789
	printf("x=%f\ny=%f\ni=%d",x,y,i); //output x=12.3 i=45 y=.6
	
	return 0;
}
