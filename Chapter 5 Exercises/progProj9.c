#include <stdio.h>

int main(void){
	int m1,d1,y1,m2,d2,y2,result;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d",&m1,&d1,&y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d",&m2,&d2,&y2);
	
	if(y1<y2){
		result = 1;
	}else if(y2<y1){
		result = 2;
	}else if(y1==y2){
		if(m1<m2){
			result = 1;
		}else if(m2<m1){
			result = 2;
		}else if(m1==m2){
			if(d1<d2){
				result = 1;
			}else if(d2<d1){
				result = 2;
			}else if(d1==d2){
				result = 0;
			}
		}
	}
	
	switch (result)
	{
		case 1: printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1,d1,y1,m2,d2,y2); break;
		case 2: printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2,d2,y2,m1,d1,y1); break;
		case 0: printf("Both are equal");break;
	}
	
	return 0;
}
