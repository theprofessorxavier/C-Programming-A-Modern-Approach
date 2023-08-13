#include <stdio.h>

int main(void){
    int a,num;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate) : ");
    scanf("%d", &a);
    while(a!=0){
        num+=a;
        scanf("%d",&a);
    }   
    printf("The sum is: %d", num);

    return 0;
}