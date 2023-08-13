#include <stdio.h>
#define PI 3.14f
#define CONSTANT 4.0f / 3.0f

int main(){
	float r, v;
	
	printf("Radius: ");
	scanf("%f", &r);
	
	v = (CONSTANT * PI) * (r*r*r);
	
	printf("Answer: %.2f", v);
}
