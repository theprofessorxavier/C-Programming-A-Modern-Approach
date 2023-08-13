#include <stdio.h>

int main(void){
	int i,j;
	i = 2; j = 1; //-1
	printf("%d\n", (i < j) - (i > j));
	i = 1; j = 2; //1
	printf("%d\n", (i < j) - (i > j));
	i = 1; j = 1; //0
	printf("%d\n", (i < j) - (i > j));
	
	return 0;
}
