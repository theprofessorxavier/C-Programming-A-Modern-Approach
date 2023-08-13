#include <stdio.h>

int main(void){
	int GS1, GI, PubCode, ItmNum, Chkdig;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GS1, &GI, &PubCode, &ItmNum, &Chkdig);
	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",
	GS1, GI, PubCode, ItmNum, Chkdig);
	
	return 0;
}
