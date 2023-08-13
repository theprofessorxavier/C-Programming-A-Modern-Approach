#include <stdio.h>

int main(void){
	int itmNum, m, d, y;
	float  UnitPrice;
	printf("Enter item number: ");
	scanf("%d", &itmNum);
	printf("Enter unit price: ");
	scanf("%f", &UnitPrice);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%d/%d", itmNum, UnitPrice, m, d, y);
	return 0;
}
