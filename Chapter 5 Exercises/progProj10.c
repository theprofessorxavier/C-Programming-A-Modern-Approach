#include <stdio.h>

int main(void){
	int grade;
	printf("Enter numerical grade: ");
	scanf("%d",&grade);
	if(grade >= 0 && grade <= 100){
	switch(grade/10){
		case 9: case 10: printf("Letter grade: A");break;
		case 8: printf("Letter grade: B");break;
		case 7: printf("Letter grade: C");break;
		case 6: printf("Letter grade: D");break;
		case 0:case 1:case 2:case 3:case 4:case 5: printf("Letter grade: F");break;
	}	
	}else{
		printf("Error");
	}
	return 0;
}
