#include <stdio.h>

int main(void){
	int a,b,c,d,e,f,g,h; float a1,b1,c1,d1,e1,f1;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf(" %d", &b);
	printf("Input c,d,e: ");
	scanf("%d-%d-%d", &c,&d,&e);
	printf("Input f,g,h: ");
	scanf("%d -%d -%d", &f,&g,&h);
	printf("Input a1: ");
	scanf("%f", &a1);
	printf("Input b1: ");
	scanf("%f", &b1); //scanf("%f ", &b1); - original
	printf("Input c1,d1: ");
	scanf("%f,%f", &c1,&d1);
	printf("Input e1,f1: ");
	scanf("%f, %f", &e1,&f1);
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d %d %d\n", c,d,e);
	printf("%d %d %d\n", f,g,h);
	printf("%f\n", a1);
	printf("%f\n", b1);
	printf("%f %f\n", c1,d1);
	printf("%f %f\n", e1,f1);
	
	return 0;
	
}
