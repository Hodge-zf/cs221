#include <stdio.h>
 
int main(void){
 
        int num1;
        int num2;
 
        printf("Enter two integers\n");
 
        scanf("%d%d", &num1, &num2);
 
        if (num1 == num2){
                printf("%d is equal to %d\n", num1, num2);
        }
 
 
        if (num1 != num2){
                printf("%d is not equal to %d\n", num1, num2);
        }
}        
