#include <stdio.h>

int main(){
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	while(i<=n){
		printf("%10d%10d\n", i, i * i);
		i++;
	}

	return 0;
	
	// int ent, n = 1;

	// printf("This program prints a table of squares.\n");
	// printf("Enter number of entries in table: ");
	// scanf("%d", &ent);
	// while(ent > 0){
	// 	printf("%d\t%d\n",n,n*n);
	// 	n++;
	// 	ent--;
	// }
}