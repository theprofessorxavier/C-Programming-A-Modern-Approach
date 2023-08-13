#include <stdio.h>

int main(void){
	int grade;
	grade = 5;
	switch(grade){
		case 4: printf("Excellent"); break;
		case 3: printf("Good"); break;
		case 2: printf("Average"); break;
		case 1: printf("Poor"); break;
		case 0: printf("Failing"); break;
		default: printf("Illegal grade"); break;
	}
	
//alternative
//	char grade;
//	grade = 'f';
//	switch(grade){
//		case 'a': printf("Excellent"); break;
//		case 'b': printf("Good"); break;
//		case 'c': printf("Average"); break;
//		case 'd': printf("Poor"); break;
//		case 'f': printf("Failing"); break;
//		default: printf("Illegal grade"); break;
//	}
	
	return 0;
}
